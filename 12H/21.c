/**
 * @file    21.c
 * @brief   Programma ar datu izvadu (data out)
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#define __STDC_FORMAT_MACROS
#include <inttypes.h> //Iekļauj int8_t ... int64t u.c. datu tipus
#include <stdio.h> //Iekļauj standarta ieavades/izvades bibliotēku
#include <stdlib.h> //Deklarē dažādas funkcijas un vērtības
#include <limits.h>

/**
 * @brief   Galvenā programmas funkcija
 * @param   argc  Argumentu skaits padots uz programmu
 * @param   argv  Argumentu massīvs (char pointer array)
 * @return  Programmas izpildes rezultāta kods
 */
int main (int argc, char *argv[]) {
  int64_t a = 50000;    //50'000
  int64_t b = 1000000;  //1'000'000
  int64_t c = a * b;//Iemesls kāpēc izmantoju int64_t nevis int32_t vai long ir tāds, ka mans kompilators negrib strādāt 64bit sistēmā

  printf("int datu tipa izmers ir %d baiti\n", sizeof(int)); //Izvade uz termināli/konsoli
  printf("int64_t datu tipa izmers ir %d baiti\n", sizeof(int64_t)); //Izvade uz termināli/konsoli

  printf("Aprekinam a un b reizinajumu:\n"); //Izvade uz termināli/konsoli
  printf("a = %" PRId64 " un b = %" PRId64 "\n", a, b); //Izvade uz termināli/konsoli
  printf("c = a * b = %" PRId64 " * %" PRId64 " = %" PRId64 "\n", a, b, c); //Izvade uz termināli/konsoli

  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
