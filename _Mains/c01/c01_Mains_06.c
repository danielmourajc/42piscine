#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *ptr;
	int rst;
	char a[] = "Minha String";

	ptr = &a[0];
	rst = ft_strlen(ptr);
	printf("Quantidade de Caracteres de sua String: %d\n", rst);
	printf("%s", a);
}
