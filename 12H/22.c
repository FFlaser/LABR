/**
 * @file    22.c
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
  double lim; //robežas mainīgais

  for(int k = 1; k<=50; k++) { // k iet no 1 līdz 50 (principā līdz 51)
    lim = pow((1+1./k), k); //Pakāpes funkcija
    printf("k=%d\tlim=%.3f\n", k, lim); //Izvade uz termināli/konsoli
  }

  int i; //maskēts k, lai nebūtu pa jaunam jādekrelē
  double limm; //robežas mainīgais

  for(i = 1; i<=500; i++) {// i iet no 1 līdz 500 (principā līdz 501)
    limm = pow((1+1./i), i);//Pakāpes funkcija
  }
  printf("===============\n"); //Izvade uz termināli/konsoli
  printf("k=%d\tlim=%.3f\n", i-1, limm); //Izvade uz termināli/konsoli

  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
