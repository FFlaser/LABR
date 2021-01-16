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

int find_minimum(int a[], int size);
int find_maximum(int a[], int size);
float average(int a[], int size);
float find_median(int a[], int n);
int mode(int a[], int n);

int main (int argc, char *argv[]) {
  int Temp;
  int mas3[] = {2, 5, 3, 7, 0};

  printf("Kopas elementu skaits = %d\n", NELEMS(mas3));
  printf("Min vertiba = %d\n", find_minimum(mas3, NELEMS(mas3)));
  printf("Max vertiba = %d\n", find_maximum(mas3, NELEMS(mas3)));
  printf("Vid vertiba = %.2f\n", average(mas3, NELEMS(mas3)));
  printf("Mediana = %.2f\n", find_median(mas3, NELEMS(mas3)));
  printf("Moda = %d\n", mode(mas3, NELEMS(mas3)));

  return EXIT_SUCCESS;
}

int find_minimum(int a[], int size) {
  int val = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] < val) {
       val = a[i];
    }
  }
  return val;
}

int find_maximum(int a[], int size) {
  int val = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] > val) {
       val = a[i];
    }
  }
  return val;
}

float average(int a[], int size) {
  float sum = 0;
  for (int i = 0; i < size; i++)
    sum += a[i];
  return sum/size;
}


float find_median(int array[] , int n)
{
  int temp=0;
  for(int i=0 ; i < n ; i++ ){
    for(int j=0 ; j< n-1 ; j++){
      if(array[j]>array[j+1]){
          temp        = array[j];
          array[j]    = array[j+1];
          array[j+1]  = temp;
      }
    }
  }

  float median=0;
  if(n%2 == 0)
      median = (array[(n-1)/2] + array[n/2])/2.0;
  else
      median = array[n/2];

  return median;
}

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

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
