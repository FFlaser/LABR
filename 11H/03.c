/**
 * @file    03.c
 * @brief   Programma ar datu ievadi, izvadi (data in, out)
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#include <stdio.h> //Iekļauj standarta ieavades/izvades bibliotēku
#include <stdlib.h> //Deklarē dažādas funkcijas un vērtības

/**
 * @brief   Galvenā programmas funkcija
 * @param   argc  Argumentu skaits padots uz programmu
 * @param   argv  Argumentu massīvs (char pointer array)
 * @return  Programmas izpildes rezultāta kods
 */
int main (int argc, char *argv[]) {
  printf("Ievadiet simbolu:"); //Izvadīts jautājums lietotājam

  char input; //Deklarēts mainīgais priekš ievades

  scanf("%c", &input); //Ievadītais simbols, tiek ievietots input vērtībā
  printf("Jus ievadijat:%c\n", input); //Tiek izvadīts iepriekš ievadītais simbols ar formatējumu

  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
