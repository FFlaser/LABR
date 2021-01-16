/**
 * @file    30.c
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


int main (int argc, char *argv[]) {
  int num;
  int64_t reizinajums = 1;

  printf("Ievadi vesalu skaitli: ");
  scanf("%d", &num);

  if(num < 0)
    printf("Negatīvam skaitlim nav iespejams faktorials");
  else if(num > 25)
    printf("Skaitlis ir par lielu prieks manis :/");
  else {
    for(int i = 1; i<=num;i++) {
      reizinajums *= i;
    }
    /*
     * int i šajā programmā var tik definēts kā jebkurš Skaitlisks datu tips:
     * char, unsigned char, signed char, int, unsigned int, short, unsigned short, long, unsigned long
     * kā arī int8_t ... int64_t
     * Par cik maksimālā vērtība int64_t reizinajums ierobežo skaitli no kura var gūt faktoriālu, tapēc i nekad nebūs lielāks par 25
     * Uzlabojums programai varētu būt izmainīt datu tipu int64_t reizinajums uz __int128 reizinajums = *(__int128*) 1;
     * Vai to darīt kā savādāk.
     */

    printf("Skaitla faktorials ir:%" PRId64 "\n", reizinajums);
  }

  return EXIT_SUCCESS;
}
