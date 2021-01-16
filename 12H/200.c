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
  int input;
  printf("Ievadi skatli:");
  scanf("%d", &input);

  int aaa[10];
  int bbb[10] = {2, 3, 5, 7, 8, 10, 11, 14, 16, 19};
  for(int i = 0; i < 10; i++) {
    aaa[i] = (input + i) % bbb[i];
    printf("%d\t", aaa[i]); //Izvade uz termināli/konsoli
  }
  printf("\n");
  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
