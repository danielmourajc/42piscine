#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int c;
    int d;
    int result_div;
    int result_mod;
    int *div;
    int *mod;

    c = 42;
    d = 12;
    div = &result_div;
    mod = &result_mod;

    ft_div_mod(c, d, div, mod);

    printf("Valor Armazenado na Div: %d\nValor Armazenado no Mod: %d\n", result_div, result_mod);
   
    return (0);
}
