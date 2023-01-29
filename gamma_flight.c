#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "MT.h"

int main (void) {
    int gamma_ray_number = 1000000;
    double half_value_layer = 1.0, eta, flight_length[gamma_ray_number];
    FILE *fp;

    init_genrand((unsigned)time(NULL));


    for (int i = 0; i < gamma_ray_number; i++) {

        eta = genrand_real1();
        flight_length[i] = -log(eta) / half_value_layer;
    }

    fp = fopen("result.txt", "w");
    for (int i = 0; i < gamma_ray_number; i++) {
        fprintf (fp, "%d %f\n", i, flight_length[i]);
    }
    fclose (fp);

    return 0;

}