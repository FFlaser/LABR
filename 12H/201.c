/**
 * @file    200.c
 * @brief   Programma ar datu izvadu (data out)
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#include <stdio.h> //Iekļauj standarta ieavades/izvades bibliotēku
#include <stdlib.h> //Deklarē dažādas funkcijas un vērtības
#include <math.h> //Iekļauj matemātiskās funkcijas

/**
 * @brief   Galvenā programmas funkcija
 * @param   argc  Argumentu skaits padots uz programmu
 * @param   argv  Argumentu massīvs (char pointer array)
 * @return  Programmas izpildes rezultāta kods
 */
int main (int argc, char *argv[]) {
  float input;
  printf("Ievadi lenki grados:");
  scanf("%f", &input);

  float radd = input * (M_PI/180) ;
  printf("Radiani:%f\n", radd);
  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
