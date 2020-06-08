#include <stdio.h>
#include <stdlib.h>

#include "scores.h"

int main(int ac, char *as[]) {
    if(ac != 4) {
        fprintf(stderr, "Usage: %s [hum] [temp] [res]\n", as[0]);
        return EXIT_FAILURE;
    }

    double vals[3];

    for(int i=0; i<3; ++i) {
        if(sscanf(as[i+1], "%lf", &(vals[i])) != 1) {
            fprintf(stderr, "Error while parsing %d. argument!\n", i+1);
            return EXIT_FAILURE;
        }
    }

    printf("%.4lf\n", get_IAQ(vals[0], vals[1], vals[2]));
    return EXIT_SUCCESS;
}
