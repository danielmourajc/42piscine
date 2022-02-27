#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
    int a;
    int *nbr;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr9;

    a = 30;
    nbr = &a;
    nbr2 = &nbr;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;

    printf("Valor Inicial de Int: %d\n", a);
    
    ft_ultimate_ft(nbr9);
    printf("Valor Alterado de Int: %d\n", *********nbr9);
    return(0);
}
