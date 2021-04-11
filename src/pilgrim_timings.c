/**
 * Interval ID and Duration ID stored in the key
 */
#include <math.h>
#include <limits.h>
#include "pilgrim.h"
#include "pilgrim_timings.h"
#include "uthash.h"


inline int min(int a, int b) {
    return a < b ? a: b;
}

inline int get_bin_id(double val) {
    if(val==0)
        val = 0.000001;
    double base = 1.2;
    int id = log(val) / log(base);
    if(id < 0) id = -id;
    id = min(999999, id);
    return id;
}


void update_timings_info(RecordHash* entry, Record* record, int *interval_id, int *duration_id) {
    /*
     * By default, keep only aggregated timing inofrmation
     */
    double duration = record->tend - record->tstart;
    double t = (duration - entry->avg_duration);
    unsigned previous_count = entry->count - 1;

    entry->avg_duration = (entry->avg_duration * previous_count + duration) / entry->count;
    entry->std_duration = (entry->std_duration * previous_count +  t*t) / entry->count;

    /*
     * If required, we can also store non-aggregated timing information
     */
    int interval_i = (record->tstart - entry->ext_tstart) / TIME_RESOLUTION;
    int duration_i = duration / TIME_RESOLUTION;
    entry->ext_tstart += interval_i * TIME_RESOLUTION;
    *interval_id = get_bin_id(interval_i);
    *duration_id = get_bin_id(duration_i);
}

