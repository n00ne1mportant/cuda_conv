#ifndef HELPER_H
#include <chrono>

#define HELPER_H
#define STATUS_MEMEORY_ALLOCATION_ERROR -1
#define STATUS_OPEN_FILE_ERROR -2
#define STATUS_OK 0
#define STATUS_READ_ERROR -3
#define FIRST_RUN -2
#define TRUE 1
#define FALSE 0
void readFilters(char* file, float**** out_filters, int** out_sizes, char*** out_names, int* count);
void flushStdinSafe();
float* sequencialConvolution(float* imageData, float* filter, int imageW, int imageH, int components, int filterSize);
int shouldRunSequential();
float* flatenFilter(float**, const int s);
int showMenu(char** names, int count);
#endif // !HELPER_H