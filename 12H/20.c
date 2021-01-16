/**
 * @file    20.c
 * @brief   Programma ar datu izvadu (data out)
 *
 * @version 0.0.1
 * @author  Francis Pogulis
 * Contact: francispo@inbox.lv
 */
#include <stdio.h> //Iekļauj standarta ieavades/izvades bibliotēku
#include <stdlib.h> //Deklarē dažādas funkcijas un vērtības

//Priekšlaicīgas funkcijas deklarācijas (prototipi)
void f61();
void f62();
void f63();

/**
 * @brief   Galvenā programmas funkcija
 * @param   argc  Argumentu skaits padots uz programmu
 * @param   argv  Argumentu massīvs (char pointer array)
 * @return  Programmas izpildes rezultāta kods
 */
int main (int argc, char *argv[]) {
  char vards[20]; //Mainīgais kas uztur ievadīto vārdu
  int vecums;     //Mainīgais kas uztur ievadīto vecumu
  float augums;   //Mainīgais kas uztur ievadīto augumu

  f61();
  scanf("%s", &vards);  //Tiek gaidīta un ievietota atmiņā ievadītā vērtība

  f62();
  scanf("%d", &vecums); //Tiek gaidīta un ievietota atmiņā ievadītā vērtība

  f63();
  scanf("%g", &augums); //Tiek gaidīta un ievietota atmiņā ievadītā vērtība

  float hCM = augums * 100.0f; //metri pārvērsti uz centimetriem

  printf("================================\n"); //Sadaloša līnija lai būtu vieglāk pārskatāms

  printf("Mans vards ir %s\n", vards); //Izvadīts iepriekš ievadītais vārds
  printf("Esmu %d gadus jauns. %d gada produkts\n", vecums, 2021 - vecums); //Izvadīts iepriekš ievadītais vecums un rupš aprēķins dzimšanas gadam
  printf("Garumaa esmu padevies %g cm\n", hCM); //Izvadīts iepriekš aprēķinātais augstums centimetros


  return EXIT_SUCCESS; //Programma izpildīta veiksmīgi
}

//Funkcijas, kas izvada tekstu lietotājam. Iepriekš deklarēti prototipi
void f61() {
  printf("Sveiks, ievadi savu vardu:\t"); //Izvadīts jautājums lietotājam ar vizuāli parskatāmu formatējumu
}

void f62() {
  printf("Ievadi vecumu:\t\t\t"); //Izvadīts jautājums lietotājam ar vizuāli parskatāmu formatējumu
}

void f63() {
  printf("Tavs augums (metros):\t\t"); //Izvadīts jautājums lietotājam ar vizuāli parskatāmu formatējumu
}
