#include <stdio.h>

void ft_ultimate_div_mod(int* a, int* b);

int main()
{
    int c;
	int d;
	int *ptr1;
	int *ptr2;

    c = 10;
    d  = 5;
    ptr1 = &c;
    ptr2 = &d;
    
	ft_ultimate_div_mod(ptr1, ptr2);
    
	printf("Resultado da Divisao: %d\nResultado do Mod: %d\n", *ptr1, *ptr2);    

    return (0);
}
