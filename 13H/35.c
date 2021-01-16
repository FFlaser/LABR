/**
 * @file    35.c
 * @brief   Datormācibas labaratorijas darbs
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Nosaka massīva elementu daudzumu
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main (int argc, char *argv[]) {
  double mas[101];

  for(int i = 0; i < NELEMS(mas); i++) {
    mas[i] = sqrt((double)i/(double)10);
  }

  for(int i = 0; i < NELEMS(mas); i++)
    printf("%.1f\t%.3f\n", (i/(double)10), mas[i]);

  return EXIT_SUCCESS;
}
