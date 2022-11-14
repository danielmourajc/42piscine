#include <stdio.h>

void    ft_swap(int *a, int *b);

int main (void)
{
    int a;
    int b;
    int *ptr1;
    int *ptr2;

    a = 15;
    b = 30;
    ptr1 = &a;
    ptr2 = &b;

    printf("Valores Normais: %d %d\n", a, b);
	ft_swap(ptr1, ptr2);
    printf("Valores Trocados: %d %d\n",a, b);
}
