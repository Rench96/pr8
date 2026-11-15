#include <stdio.h>

#define RAZMER 100

int chitat(int *znach);
size_t zadatRazmer(size_t n);
void zapolnit(int *arrptr, size_t n);
void pokazat(int *arrptr, size_t n);
int maksDiapazon(int *arrptr, size_t n, int k, int m, int *rez);
int srednDiapazon(int *arrptr, size_t n, int k, int m, double *rez);
size_t kolBolshe(int *arrptr, size_t n, int k);
