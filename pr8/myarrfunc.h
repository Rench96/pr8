#include <stdio.h>

#define RAZMER 100

int chitat(int *znach);
size_t zadatRazmer(size_t n);
void zapolnit(int massiv[], size_t n);
void pokazat(int massiv[], size_t n);
int maxDiapazon(int massiv[], size_t n, int k, int m, int *rez);
int srednDiapazon(int massiv[], size_t n, int k, int m, double *rez);
size_t kolBolshe(int massiv[], size_t n, int k);
