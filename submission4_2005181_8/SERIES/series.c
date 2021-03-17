#include "series.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

series_results_t series(char *input_text, unsigned int substring_length)
{
    int len = strlen(input_text);
    if (substring_length > (unsigned int) len || substring_length == 0) {
        return (series_results_t) {0, NULL};
    }
    char **substrings = (char **) malloc((len - substring_length + 1) * sizeof(char **));
    unsigned int i;
    for (i=0; i < len - substring_length + 1; i++) {
        char *s = (char *) malloc(substring_length + 1);
        strncpy(s, input_text + i, substring_length);
        s[substring_length] = '\0';
        substrings[i] = s;
    }
    return (series_results_t) {i, substrings};
}
