#include "myarrfunc.h"

int main(void)
{
    int massiv[RAZMER] = {0};
    size_t n = 0;
    char punkt = 0;
    int rez, simvol, k, m, max;
    double sred;

    while (punkt != 'g')
    {
        printf("\n");
        printf("a    Задать размер массива\n");
        printf("b    Заполнить массив\n");
        printf("c    Представление массива (значения, адреса)\n");
        printf("d    Максимум в диапазоне индексов k-m\n");
        printf("e    Среднее арифметическое в диапазоне индексов k-m\n");
        printf("f    Количество элементов больше k\n");
        printf("g    Выход\n");
        printf("Выберите пункт: ");

        rez = scanf(" %c", &punkt);
        if (rez == EOF)
            break;
        while ((simvol = getchar()) != '\n' && simvol != EOF)
            ;

        switch (punkt)
        {
        case 'a':
            n = zadatRazmer(n);
            break;
        case 'b':
            zapolnit(massiv, n);
            break;
        case 'c':
            pokazat(massiv, n);
            break;
        case 'd':
            printf("Введите k: ");
            if (chitat(&k) != 1)
                break;
            printf("Введите m: ");
            if (chitat(&m) != 1)
                break;
            if (maxDiapazon(massiv, n, k, m, &max))
                printf("Максимум: %d\n", max);
            else
                printf("Ошибка: неверный диапазон\n");
            break;
        case 'e':
            printf("Введите k: ");
            if (chitat(&k) != 1)
                break;
            printf("Введите m: ");
            if (chitat(&m) != 1)
                break;
            if (srednDiapazon(massiv, n, k, m, &sred))
                printf("Среднее: %.2f\n", sred);
            else
                printf("Ошибка: неверный диапазон\n");
            break;
        case 'f':
            printf("Введите k: ");
            if (chitat(&k) != 1)
                break;
            printf("Количество элементов больше k: %zu\n", kolBolshe(massiv, n, k));
            break;
        case 'g':
            printf("Выход\n");
            break;
        default:
            printf("Ошибка: нет такого пункта\n");
            break;
        }
    }

    return 0;
}
