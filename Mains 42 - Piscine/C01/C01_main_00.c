#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
    int a;

    a = 30;
    printf("Valor Inicial de Int: %d\n", a);
    
    ft_ft(&a);
    printf("Valor Alterado de Int: %d\n", a);
    
    return(0);
}
