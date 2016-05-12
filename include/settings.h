
// This is the k-mer size used in the line-finding process. It is small, which leads to lots of
// background noise in the alignment rectangle, but it means that alignments will still be found
// for high-error reads.
#define KMER_SIZE 5

// Alignment lines that have an excessively small or large slope will be rejected.
#define MIN_ALLOWED_SLOPE 0.5
#define MAX_ALLOWED_SLOPE 2.0

// Reference sequences are trimmed down before conducting an actual alignment.
#define PAD_SIZE 1000

// These are the Seqan band widths used in a banded alignment.
#define STARTING_BAND_SIZE 10
#define MAX_BAND_SIZE 160

// Line finding settings come in different sensitivity levels.
#define BAND_SIZE_LEVEL_1 16
#define LOW_SCORE_THRESHOLD_LEVEL_1 2.0
#define HIGH_SCORE_THRESHOLD_LEVEL_1 20.0
#define MERGE_DISTANCE_LEVEL_1 100.0
#define MIN_ALIGNMENT_LENGTH_LEVEL_1 40.0
#define MIN_POINT_COUNT_LEVEL_1 16

#define BAND_SIZE_LEVEL_2 16
#define LOW_SCORE_THRESHOLD_LEVEL_2 1.5
#define HIGH_SCORE_THRESHOLD_LEVEL_2 10.0
#define MERGE_DISTANCE_LEVEL_2 100.0
#define MIN_ALIGNMENT_LENGTH_LEVEL_2 20.0
#define MIN_POINT_COUNT_LEVEL_2 8

#define BAND_SIZE_LEVEL_3 16
#define LOW_SCORE_THRESHOLD_LEVEL_3 1.25
#define HIGH_SCORE_THRESHOLD_LEVEL_3 5.0
#define MERGE_DISTANCE_LEVEL_3 100.0
#define MIN_ALIGNMENT_LENGTH_LEVEL_3 10.0
#define MIN_POINT_COUNT_LEVEL_3 4
