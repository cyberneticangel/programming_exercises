#include <stdio.h>
#include <stdlib.h>

#define __STDC_VERSION__

// Task: Print out the version of C we're running.

int main() {
    printf("Running Version: %ld\n",__STDC_VERSION__);
    return 0;
}