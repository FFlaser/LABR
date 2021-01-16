/**
 * @file    02.c
 * @brief   Programma ar formatēšanas zīmju izvadi (out)
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
  char line[8] = "Sveiki!";
  char endings[11] = {'\n', '\r', '\t', '\v', '\b', '\f', '\a', '\'', '\"', '\?', '\\'};

  for(int i = 0; i < 11; i++) {
    printf("%s%c", line, endings[i]);
  }

  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}
