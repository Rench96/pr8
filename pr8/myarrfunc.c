#include "myarrfunc.h"

int chitat(int *znach)
{
    int rez, simvol;
    rez = scanf("%d", znach);
    while ((simvol = getchar()) != '\n' && simvol != EOF)
        ;
    return rez;
}

size_t zadatRazmer(size_t n)
{
    int razm;
    printf("Введите размер массива (от 1 до %d): ", RAZMER);
    if (chitat(&razm) == 1 && razm >= 1 && razm <= RAZMER)
        return razm;
    printf("Ошибка: неверный размер\n");
    return n;
}

void zapolnit(int *arrptr, size_t n)
{
    size_t i;
    int rez;
    if (n == 0)
    {
        printf("Сначала задайте размер массива\n");
        return;
    }
    for (i = 0; i < n; i++)
    {
        printf("Элемент %zu: ", i);
        rez = chitat(arrptr + i);
        while (rez != 1)
        {
            if (rez == EOF)
                return;
            printf("Ошибка, введите целое число: ");
            rez = chitat(arrptr + i);
        }
    }
}

void pokazat(int *arrptr, size_t n)
{
    size_t i;
    if (n == 0)
    {
        printf("Сначала задайте размер массива\n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("[%zu] значение %d, адрес %p\n", i, *(arrptr + i), arrptr + i);
}

int maxDiapazon(int *arrptr, size_t n, int k, int m, int *rez)
{
    int i;
    if (k < 0 || k > m || m >= (int)n)
        return 0;
    *rez = arrptr[k];
    for (i = k + 1; i <= m; i++)
    {
        if (arrptr[i] > *rez)
            *rez = arrptr[i];
    }
    return 1;
}

int srednDiapazon(int *arrptr, size_t n, int k, int m, double *rez)
{
    int i, summ = 0;
    if (k < 0 || k > m || m >= (int)n)
        return 0;
    for (i = k; i <= m; i++)
        summ = summ + arrptr[i];
    *rez = (double)summ / (m - k + 1);
    return 1;
}

size_t kolBolshe(int *arrptr, size_t n, int k)
{
    size_t i, kol = 0;
    for (i = 0; i < n; i++)
    {
        if (arrptr[i] > k)
            kol++;
    }
    return kol;
}
