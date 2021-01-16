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
#include<string.h>
//Nosaka massīva elementu daudzumu
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

void sort(char *word);
char find_minimum(char a[], int size);
char find_maximum(char a[], int size);
char average(char a[], int size);
char find_median(char a[], int n);
char mode(char a[], int n);

int main (int argc, char *argv[]) {
  int Temp;
  printf("Ievadiet vardu:");
  char mas3[20];
  scanf("%s", &mas3);
  printf("\n");

  sort(mas3);

  printf("Alfabetiski kartots: %s\n", mas3);
  printf("Kopas elementu skaits = %d\n", strlen(mas3));
  printf("Min vertiba = %c\n", find_minimum(mas3, strlen(mas3)));
  printf("Max vertiba = %c\n", find_maximum(mas3, strlen(mas3)));
  printf("Vid vertiba = %c\n", average(mas3, strlen(mas3)));
  printf("Mediana = %c\n", find_median(mas3, strlen(mas3)));
  printf("Moda = %c\n", mode(mas3, strlen(mas3)));

  return EXIT_SUCCESS;
}

void sort(char *word) {
  for (unsigned int i = 0; i < strlen(word) - 1; i++)
    for (unsigned int j = i + 1; j < strlen(word); j++)
      if (word[i] > word[j]) {
        char temp = *&word[i];
        *&word[i] = *&word[j];
        *&word[j] = temp;
      }
}

char find_minimum(char a[], int size) {
  char val = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] < val) {
       val = a[i];
    }
  }
  return val;
}

char find_maximum(char a[], int size) {
  char val = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] > val) {
       val = a[i];
    }
  }
  return val;
}

char average(char a[], int size) {
  char sum = 0;
  for (int i = 0; i < size; i++)
    sum += a[i];
  return sum/size;
}


char find_median(char array[] , int n)
{
  char median=0;
  if(n%2 == 0)
      median = (array[(n-1)/2] + array[n/2])/2.0;
  else
      median = array[n/2];

  return median;
}

char mode(char a[],int n) {
   char maxValue = 0;
   int maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
    int count = 0;

    for (j = 0; j < n; ++j) {
     if (a[j] == a[i])
     ++count;
    }

    if (count > maxCount) {
     maxCount = count;
     maxValue = a[i];
    }
   }

   return maxValue;
}
