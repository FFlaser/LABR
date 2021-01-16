/**
 * @file    40.c
 * @brief   Datormācibas labaratorijas darbs
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#include <stdio.h>
#include <stdlib.h>
//Nosaka massīva elementu daudzumu
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main (int argc, char *argv[]) {
  int Temp;
  int mas3[] = {2, 5, 3, 7, 0};

  printf("Massiva elementu skaits = %d\n", NELEMS(mas3));

  for(int i = 0; i < NELEMS(mas3); i++) {
    for(int j = 0; j < NELEMS(mas3)-1; j++) {
      if(mas3[j] < mas3[j+1]) {
        Temp = mas3[j];
        mas3[j] = mas3[j + 1];
        mas3[j + 1] = Temp;
      }
    }
  }

  for(int k = 0; k < NELEMS(mas3); k++) {
    if(k != NELEMS(mas3)-1)
      printf ("%d,",mas3[k]);
    else
      printf ("%d\n",mas3[k]);
  }

  return EXIT_SUCCESS;
}
