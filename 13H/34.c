/**
 * @file    34.c
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

//Nosaka massīva elementu daudzumu
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main (int argc, char *argv[]) {
  int mas[101];

  for(int i = 0; i < NELEMS(mas); i++) {
    mas[i] = i*i;
  }

  for(int i = 0; i < NELEMS(mas); i++)
    printf("%d\t%d\n", i, mas[i]);

  return EXIT_SUCCESS;
}
