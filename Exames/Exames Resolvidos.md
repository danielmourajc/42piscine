EXAMES RESOLVIDOS PISCINE 42


# 0 aff_a
ARQUIVOS ESPERADOS: aff_a.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba uma string e exiba o primeiro caractere 'a' encontrado nele, seguido por uma nova linha. Se não houver caracteres 'a' na string, o programa apenas escreve uma nova linha. Se o número de parâmetros não for 1, o programa exibe 'a' seguido por uma nova linha.


EXEMPLOS:<br>
$> ./aff_a "abc" | cat -e<br>
a$<br>
$> ./aff_a "dubO a POIL" | cat -e<br>
a$<br>
$> ./aff_a "zz sent le poney" | cat -e<br>
$<br>
$> ./aff_a | cat -e<br>
a$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i++;
		}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
```


# 0 ft_countdown
ARQUIVOS ESPERADOS: ft_countdown.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que exiba todos os dígitos em ordem decrescente, seguidos por um nova linha.


EXEMPLOS:<br>
$> ./ft_countdown | cat -e<br>
9876543210$<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(void)
{
	char	n;

	n = '9';
	while(n >= '0')
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
	return (0);
}
```


# 0 ft_print_numbers
ARQUIVOS ESPERADOS: ft_print_numbers.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva uma função que exiba todos os dígitos em ordem crescente.

Sua função deve ser declarada da seguinte forma:

void	ft_print_numbers(void);


RESOLUÇÃO:<br>
```C
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
}
```


# 0 hello
ARQUIVOS ESPERADOS: hello.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que exiba "Hello World!" seguido por um \n.


EXEMPLOS:<br>
$>./hello<br>
Hello World!<br>
$>./hello | cat -e<br>
Hello World!$<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
```


# 0 maff_alpha
ARQUIVOS ESPERADOS: maff_alpha.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que exiba o alfabeto, com letras pares em maiúsculas, e letras ímpares em minúsculas, seguidas por uma nova linha.


EXEMPLOS:<br>
$> ./maff_alpha | cat -e<br>
aBcDeFgHiJkLmNoPqRsTuVwXyZ$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	l;

	l = 97;
	while (l <= 122)
	{
		if (l % 2 == 0)
			ft_putchar(l - 32);
		else
			ft_putchar(l);
		l++;
	}
	ft_putchar('\n');
	return (0);
}
```


# 0 aff_first_param
ARQUIVOS ESPERADOS: aff_first_param.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba strings como argumentos e exiba seu primeiro argumento seguido por um \n.

Se o número de argumentos for menor que 1, o programa exibirá \n.


EXEMPLOS:<br>
$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e<br>
vincent$<br>
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e<br>
j'aime le fromage de chevre$<br>
$> ./aff_first_param<br>
$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[1])
			write(1, argv[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
```


# 0 aff_last_param
ARQUIVOS ESPERADOS: aff_last_param.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba strings como argumentos e exiba seu último argumento seguido por uma nova linha.

Se o número de argumentos for menor que 1, o programa exibirá uma nova linha.


EXEMPLOS:<br>
$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e<br>
chats$<br>
$> ./aff_last_param "j'aime le savon" | cat -e<br>
j'aime le savon$<br>
$> ./aff_last_param<br>
$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}
```


# 0 maff_revalpha
ARQUIVOS ESPERADOS: maff_revalpha.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que mostre o alfabeto ao contrário, com letras pares em maiúsculas e letras ímpares em minúsculas, seguidas de uma nova linha.


EXEMPLOS:<br>
$> ./maff_revalpha | cat -e<br>
zYxWvUtSrQpOnMlKjIhGfEdCbA$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	l;

	l = 122;
	while (l >= 97)
	{
		if (l % 2 == 0)
			ft_putchar(l);
		else
			ft_putchar(l - 32);
		l--;
	}
	write(1, "\n", 1);
	return (0);
}
```


# 0 only_a
ARQUIVOS ESPERADOS: only_a.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que exiba um caractere 'a' na saída padrão.


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(void)
{
	write(1, "a", 1);
	return(0);
}
```


# 0 only_z
ARQUIVOS ESPERADOS: only_z.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que exiba um caractere 'z' na saída padrão.


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(void)
{
	write(1, "z", 1);
	return(0);
}
```


# 0 aff_z
ARQUIVOS ESPERADOS: aff_z.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba uma string e exiba o primeiro 'z' caractere que encontra nele, seguido por uma nova linha. Se não houver caracteres 'z' na string, o programa escreve 'z' seguido por uma nova linha. Se o número de parâmetros não for 1, o programa exibe 'z' seguido por uma nova linha.


EXEMPLOS:<br>
$> ./aff_z "abc" | cat -e<br>
z$<br>
$> ./aff_z "dubO a POIL" | cat -e<br>
z$<br>
$> ./aff_z "zaz sent le poney" | cat -e<br>
z$<br>
$> ./aff_z | cat -e<br>
z$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
		while (*av[1][i])
		{
			if (*av[1][i] == 'z')
			{
				write(1, "z", 1);
				break ;
			}
			i++;
		}
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
```


# 1 ft_strcpy
ARQUIVOS ESPERADOS: ft_strcpy.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Reproduza o comportamento da função strcpy (man strcpy).

Sua função deve ser declarada da seguinte forma:

char    *ft_strcpy(char *dest, char *src);


RESOLUÇÃO:<br>
```C
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
```


# 1 ft_strlen
ARQUIVOS ESPERADOS: ft_strlen.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva uma função que retorne o comprimento de uma string.

Sua função deve ser declarada da seguinte forma:

int	ft_strlen(char *str);


RESOLUÇÃO:<br>
```C
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
```


# 1 repeat_alpha
ARQUIVOS ESPERADOS: repeat_alpha.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa chamado repeat_alpha que receba uma string e a exiba repetindo cada caractere alfabético tantas vezes quanto seu índice alfabético, seguido por uma nova linha.

'a' vira 'a', 'b' vira 'bb', 'e' vira 'eeee', etc...

Caso permanece inalterado.

Se o número de argumentos não for 1, basta exibir uma nova linha.


EXEMPLOS:<br>
$>./repeat_alpha "abc"<br>
abbccc<br>
$>./repeat_alpha "Alex." | cat -e<br>
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$<br>
$>./repeat_alpha 'abacadaba 42!' | cat -e<br>
abbacccaddddabba 42!$<br>
$>./repeat_alpha | cat -e<br>
$<br>
$><br>
$>./repeat_alpha "" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	i = 0;
	repeat = 1;
	if (ac == 2)
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a' + 1;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A' + 1;
			while (repeat)
			{
				write(1, &av[1][i], 1);
				repeat--;
			}
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
```


# 1 search_and_replace
ARQUIVOS ESPERADOS: search_and_replace.c<br>
FUNÇÕES PERMITIDAS: write, exit<br>


ENUNCIADO:<br>
Escreva um programa chamado search_and_replace que receba 3 argumentos, o primeiro argumentos é uma string na qual substituir uma letra (2º argumento) por outro (3º argumento).

Se o número de argumentos não for 3, basta exibir uma nova linha.

Se o segundo argumento não estiver contido no primeiro (a string) então o programa simplesmente reescreve a string seguida por uma nova linha.


EXEMPLOS:<br>
$>./search_and_replace "Papache est un sabre" "a" "o"<br>
Popoche est un sobre<br>
$>./search_and_replace "zaz" "art" "zul" | cat -e<br>
$<br>
$>./search_and_replace "zaz" "r" "u" | cat -e<br>
zaz$<br>
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e<br>
$<br>
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e<br>
ZaZ eT David aiME le METal.$<br>
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e<br>
eNcOre Un ExEmPle Pas Facile a Ecrire $<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 4)
    {
        while(av[1][i])
        {
            if(av[2][i] == '\0' && av[3][i] == '\0')
            {
                if (av[1][i] == av[2][0])
                    write(1, &av[3][0], 1)
                else
                    write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
```


# 1 ulstr
ARQUIVOS ESPERADOS: ulstr.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba uma string e inverta as maiúsculas e minúsculas de todas as suas letras.
Outros caracteres permanecem inalterados.

Você deve exibir o resultado seguido por um '\n'.

Se o número de argumentos não for 1, o programa exibirá '\n'.


EXEMPLOS:<br>
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e<br>
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$<br>
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e<br>
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $<br>
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e<br>
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$<br>
$>./ulstr | cat -e<br>
$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char 	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter += 32;
			if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
				letter -= 32;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```


# 1 rot_13
ARQUIVOS ESPERADOS: rot_13.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela letra 13 espaços à frente em ordem alfabética.

'z' torna-se 'm' e 'Z' torna-se 'M'. Caso permanece inalterado.

A saída será seguida por uma nova linha.

Se o número de argumentos não for 1, o programa exibirá uma nova linha.


EXEMPLOS:<br>
$>./rot_13 "abc"<br>
nop<br>
$>./rot_13 "My horse is Amazing." | cat -e<br>
Zl ubefr vf Nznmvat.$<br>
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e<br>
NxwuM mYXVWm , 23l $<br>
$>./rot_13 | cat -e<br>
$<br>
$><br>
$>./rot_13 "" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
                argv[1][i] += 13;
            else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
                argv[1][i] -= 13;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
```


# 1 first_word
ARQUIVOS ESPERADOS: first_word.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba uma string e exiba sua primeira palavra, seguida por um nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações ou pelo início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras, basta exibir uma nova linha.


EXEMPLOS:<br>
$> ./first_word "FOR PONY" | cat -e<br>
FOR$<br>
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e<br>
this$<br>
$> ./first_word "   " | cat -e<br>
$<br>
$> ./first_word "a" "b" | cat -e<br>
$<br>
$> ./first_word "  lorem,ipsum  " | cat -e<br>
lorem,ipsum$<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t' || *av[1] == '\n' || *av[1] == '\r' || *av[1] == '\v' || *av[1] == '\f'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t' && *av[1] != '\n' && *av[1] != '\r' && *av[1] != '\v' && *av[1] != '\f'))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
```


# 1 ft_putstr
ARQUIVOS ESPERADOS: ft_putstr.c<br>
FUNÇÕES PERMITIDAS: write<br>

ENUNCIADO:<br>
Escreva uma função que exiba uma string na saída padrão.

O ponteiro passado para a função contém o endereço da primeira string
personagem.

Sua função deve ser declarada da seguinte forma:

void	ft_putstr(char *str);


RESOLUÇÃO:<br>
```C
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}
```


# 1 ft_swap
ARQUIVOS ESPERADOS: ft_swap.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva uma função que troque o conteúdo de dois inteiros cujos endereços
são passados como parâmetros.

Sua função deve ser declarada da seguinte forma:

void	ft_swap(int *a, int *b);


RESOLUÇÃO:<br>
```C
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
```


# 1 rev_print
ARQUIVOS ESPERADOS: rev_print.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba uma string e exiba a string ao contrário seguido por uma nova linha.

Se o número de parâmetros não for 1, o programa exibe uma nova linha.


EXEMPLOS:<br>
$> ./rev_print "zaz" | cat -e<br>
zaz$<br>
$> ./rev_print "dub0 a POIL" | cat -e<br>
LIOP a 0bud$<br>
$> ./rev_print | cat -e<br>
$<br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
```


# 1 rotone
ARQUIVOS ESPERADOS: rotone.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela próxima em ordem alfabética.

'z' torna-se 'a' e 'Z' torna-se 'A'. Caso permanece inalterado.

A saída será seguida por um \n.

Se o número de argumentos não for 1, o programa exibirá \n.


EXEMPLOS:<br>
$>./rotone "abc"<br>
bcd<br>
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e<br>
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$<br>
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e<br>
BlkiA aMLJKa , 23z $<br>
$>./rotone | cat -e<br>
$<br>
$><br>
$>./rotone "" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>
```C
int    main(int argc, char *argv[])
{
	int	i;
	char	str;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			str = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				str++;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				str++;
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				str = str - 25;
			write(1, &str, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
```


# 2 fizzbuzz
ARQUIVOS ESPERADOS: fizzbuzz.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que imprima os números de 1 a 100, cada um separado por uma nova linha.

Se o número for um múltiplo de 3, ele imprimirá 'fizz' em vez disso.

Se o número for um múltiplo de 5, ele imprimirá 'buzz' em vez disso.

Se o número for múltiplo de 3 e múltiplo de 5, ele imprimirá 'fizzbuzz'.


EXEMPLOS:<br>
$>./fizzbuzz<br>
1<br>
2<br>
fizz<br>
4<br>
buzz<br>
fizz<br>
7<br>
8<br>
fizz<br>
buzz<br>
11<br>
fizz<br>
13<br>
14<br>
fizzbuzz<br>
[...]<br>
97<br>
98<br>
fizz<br>
buzz<br>
$><br>


RESOLUÇÃO:<br>
```C
#include <unistd.h>

void print(int nbr)
{
    char c;

    if (nbr > 9)
        print(nbr / 10);
    c = (nbr % 10) + 48;
    write(1, &c, 1);
}

int main()
{
    int nbr;

    nbr = 1;
    while (nbr <= 100)
    {
        if (nbr % 3 == 0 && nbr % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (nbr % 3 == 0)
            write(1, "fizz", 4);
        else if (nbr % 5 == 0)
            write(1, "buzz", 4);
        else
            print(nbr);
        write(1, "\n", 1);
        nbr++;
    }
}
```


# 2 ft_atoi
ARQUIVOS ESPERADOS: ft_atoi.c<br>
FUNÇÕES PERMITIDAS: None<br>


ENUNCIADO:<br>
Escreva uma função que converta o argumento string str em um inteiro (tipo int) e retorne ele.

Funciona muito parecido com a função padrão atoi(const char *str), veja o man.

Sua função deve ser declarada da seguinte forma:

int	ft_atoi(const char *str);


RESOLUÇÃO:<br>

```C
int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
```


# 2 ft_strdup
ARQUIVOS ESPERADOS: ft_strdup.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);


RESOLUÇÃO:<br>



# 2 inter
ARQUIVOS ESPERADOS: inter.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva um programa que receba duas strings e exiba, sem doubles, os caracteres que aparecem em ambas as strings, na ordem em que aparecem na primeira.

A exibição será seguida por um \n.

Se o número de argumentos não for 2, o programa exibirá \n.


EXEMPLOS:<br>
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e<br>
padinto$<br>
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e<br>
df6ewg4$<br>
$>./inter "rien" "cette phrase ne cache rien" | cat -e<br>
rien$<br>
$>./inter | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 2 last_word
ARQUIVOS ESPERADOS: last_word.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of the string.

If the number of parameters is not 1, or there are no words, display a newline.


EXEMPLOS:<br>
$> ./last_word "FOR PONY" | cat -e<br>
PONY$<br>
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e<br>
not$<br>
$> ./last_word "   " | cat -e<br>
$<br>
$> ./last_word "a" "b" | cat -e<br>
$<br>
$> ./last_word "  lorem,ipsum  " | cat -e<br>
lorem,ipsum$<br>
$><br>


RESOLUÇÃO:<br>



# 2 reverse_bits
ARQUIVOS ESPERADOS: reverse_bits.c<br>
FUNÇÕES PERMITIDAS:<br>


ENUNCIADO:<br>
Escreva a function that takes a byte, reverses it, bit by bit (like the EXEMPLOS) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);


EXEMPLOS:<br>
1 byte<br>
_____________<br>
 0010  0110<br>
	 ||<br>
	 \/<br>
 0110  0100<br>


RESOLUÇÃO:<br>



# 2 swap_bits
ARQUIVOS ESPERADOS: swap_bits.c<br>
FUNÇÕES PERMITIDAS:<br>


ENUNCIADO:<br>
Escreva a function that takes a byte, swaps its halves (like the EXEMPLOS) and returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);


EXEMPLOS:<br>
1 byte<br>
_____________<br>
 0100 | 0001<br>
     \ /<br>
     / \<br>
 0001 | 0100<br>


RESOLUÇÃO:<br>



# 2 union
ARQUIVOS ESPERADOS: union.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and will be followed by a \n.

If the number of arguments is not 2, the program displays \n.


EXEMPLOS:<br>
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e<br>
zpadintoqefwjy$<br>
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e<br>
df6vewg4thras$<br>
$>./union "rien" "cette phrase ne cache rien" | cat -e<br>
rienct phas$<br>
$>./union | cat -e<br>
$<br>
$><br>
$>./union "rien" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 2 alpha_mirror
ARQUIVOS ESPERADOS: alpha_mirror.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program called alpha_mirror that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'

'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.


EXEMPLOS:<br>
$>./alpha_mirror "abc"<br>
zyx<br>
$>./alpha_mirror "My horse is Amazing." | cat -e<br>
Nb slihv rh Znzarmt.$<br>
$>./alpha_mirror | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 2 max
ARQUIVOS ESPERADOS: max.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva the following function:

int	max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.


RESOLUÇÃO:<br>



# 2 wdmatch
ARQUIVOS ESPERADOS: wdmatch.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes two strings and checks whether it's possible to write the first string with characters from the second string, while respecting the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.


EXEMPLOS:<br>
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e<br>
faya$<br>
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e<br>
$<br>
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e<br>
quarante deux$<br>
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e<br>
$<br>
$>./wdmatch | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 2 do_op
ARQUIVOS ESPERADOS: *.c, *.h<br>
FUNÇÕES PERMITIDAS: atoi, printf, write<br>


ENUNCIADO:<br>
Escreva a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation, followed by a newline. If the number of parameters is not 3, the program just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative numbers, in input or output, will have one and only one leading '-'. The result of the operation fits in an int.


EXEMPLOS:<br>
$> ./do_op "123" "*" 456 | cat -e<br>
56088$<br>
$> ./do_op "9828" "/" 234 | cat -e<br>
42$<br>
$> ./do_op "1" "+" "-43" | cat -e<br>
-42$<br>
$> ./do_op | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 2 print_bits
ARQUIVOS ESPERADOS: print_bits.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a function that takes a byte, and prints it in binary WITHOUT A NEWLINE AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

EXEMPLOS:<br>
se você passar 2 para print_bits, ele imprimirá "00000010"


RESOLUÇÃO:<br>



# 2 ft_strcmp
ARQUIVOS ESPERADOS: ft_strcmp.c<br>
FUNÇÕES PERMITIDAS: <br>


Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);


RESOLUÇÃO:<br>



# 2 ft_strrev
ARQUIVOS ESPERADOS: ft_strrev.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);


RESOLUÇÃO:<br>



# 2 is_power_of_2
ARQUIVOS ESPERADOS: is_power_of_2.c<br>
FUNÇÕES PERMITIDAS: None<br>


ENUNCIADO:<br>
Escreva a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);


RESOLUÇÃO:<br>



# 3 add_prime_sum
ARQUIVOS ESPERADOS: add_prime_sum.c<br>
FUNÇÕES PERMITIDAS: write, exit<br>


ENUNCIADO:<br>
Escreva a program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.

Sim, os exemplos estão certos.


EXEMPLOS:<br>
$>./add_prime_sum 5<br>
10<br>
$>./add_prime_sum 7 | cat -e<br>
17$<br>
$>./add_prime_sum | cat -e<br>
0$<br>
$><br>


RESOLUÇÃO:<br>



# 3 epur_str
ARQUIVOS ESPERADOS: epur_str.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes a string, and displays this string with exactly one space between words, with no spaces or tabs either at the beginning or the end, followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the program displays \n.


EXEMPLOS:<br>
$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e<br>
vous voyez c'est facile d'afficher la meme chose$<br>
$> ./epur_str " seulement          la c'est      plus dur " | cat -e<br>
seulement la c'est plus dur$<br>
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e<br>
$<br>
$> ./epur_str "" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 3 ft_list_size
ARQUIVOS ESPERADOS: ft_list_size.c, ft_list.h<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva a function that returns the number of elements in the linked list that's passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called ft_list.h:

typedef struct    s_list<br>
{<br>
    struct s_list *next;<br>
    void          *data;<br>
}                 t_list;<br>


RESOLUÇÃO:<br>



# 3 ft_rrange
ARQUIVOS ESPERADOS: ft_rrange.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


ENUNCIADO:<br>
Escreva the following function:

int	*ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at end and end at start (Including start and end !), then return a pointer to the first value of the array.


EXEMPLOS:<br>
- With (1, 3) you will return an array containing 3, 2 and 1<br>
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.<br>
- With (0, 0) you will return an array containing 0.<br>
- With (0, -3) you will return an array containing -3, -2, -1 and 0.<br>


RESOLUÇÃO:<br>



# 3 hidenp
ARQUIVOS ESPERADOS: hidenp.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program named hidenp that takes two strings and displays 1 followed by a newline if the first string is hidden in the second one, otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to find each character from s1 in s2, in the same order as they appear in s1. Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.


EXEMPLOS:<br>
$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e<br>
1$<br>
$>./hidenp "abc" "2altrb53c.sse" | cat -e<br>
1$<br>
$>./hidenp "abc" "btarc" | cat -e<br>
0$<br>
$>./hidenp | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 3 pgcd
ARQUIVOS ESPERADOS: pgcd.c<br>
FUNÇÕES PERMITIDAS: printf, atoi, malloc, free<br>


ENUNCIADO:<br>
Escreva a program that takes two strings representing two strictly positive integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a strictly positive integer).

If the number of parameters is not 2, display a newline.


EXEMPLOS:<br>
$> ./pgcd 42 10 | cat -e<br>
2$<br>
$> ./pgcd 42 12 | cat -e<br>
6$<br>
$> ./pgcd 14 77 | cat -e<br>
7$<br>
$> ./pgcd 17 3 | cat -e <br>
1$<br>
$> ./pgcd | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 3 print_hex
ARQUIVOS ESPERADOS: print_hex.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes a positive (or zero) number expressed in base 10, and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.


EXEMPLOS:<br>
$> ./print_hex "10" | cat -e<br>
a$<br>
$> ./print_hex "255" | cat -e<br>
ff$<br>
$> ./print_hex "5156454" | cat -e<br>
4eae66$<br>
$> ./print_hex | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 3 rstr_capitalizer
ARQUIVOS ESPERADOS: rstr_capitalizer.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes one or more strings and, for each argument, puts the last character of each word (if it's a letter) in uppercase and the rest in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the string. If a word has a single letter, it must be capitalized.

If there are no parameters, display \n.


EXEMPLOS:<br>
$> ./rstr_capitalizer | cat -e<br>
$<br>
$> ./rstr_capitalizer "Premier PETIT TesT" | cat -e<br>
premieR petiT tesT$<br>
$> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e<br>
deuxiemE tesT uN peU moinS  facilE$<br>
   attentioN c'esT paS duR quanD memE$<br>
alleR uN dernieR 0123456789pouR lA routE    E $<br>
$><br>


RESOLUÇÃO:<br>



# 3 expand_str
ARQUIVOS ESPERADOS: expand_str.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes a string and displays it with exactly three spaces between each word, with no spaces or tabs either at the beginning or the end, followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display a newline.


EXEMPLOS:<br><br>
$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e<br>
vous   voyez   c'est   facile   d'afficher   la   meme   chose$<br>
$> ./expand_str " seulement          la c'est      plus dur " | cat -e<br>
seulement   la   c'est   plus   dur$<br>
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e<br>
$<br>
$> ./expand_str "" | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 3 tab_mult
ARQUIVOS ESPERADOS: tab_mult.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int, and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.


EXEMPLOS:<br>
$>./tab_mult 9<br>
1 x 9 = 9<br>
2 x 9 = 18<br>
3 x 9 = 27<br>
4 x 9 = 36<br>
5 x 9 = 45<br>
6 x 9 = 54<br>
7 x 9 = 63<br>
8 x 9 = 72<br>
9 x 9 = 81<br>
$>./tab_mult 19<br>
1 x 19 = 19<br>
2 x 19 = 38<br>
3 x 19 = 57<br>
4 x 19 = 76<br>
5 x 19 = 95<br>
6 x 19 = 114<br>
7 x 19 = 133<br>
8 x 19 = 152<br>
9 x 19 = 171<br>
$><br>
$>./tab_mult | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 3 ft_atoi_base
ARQUIVOS ESPERADOS: ft_atoi_base.c<br>
FUNÇÕES PERMITIDAS: None<br>


ENUNCIADO:<br>
Escreva a function that converts the string argument str (base N <= 16) to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef Those are, of course, to be trimmed according to the requested base. Por exemplo, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);


RESOLUÇÃO:<br>



# 3 ft_range
ARQUIVOS ESPERADOS: ft_range.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


ENUNCIADO:<br>
Escreva the following function:

int	*ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end (Including start and end !), then return a pointer to the first value of the array.


EXEMPLOS:<br>
- With (1, 3) you will return an array containing 1, 2 and 3.<br>
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.<br>
- With (0, 0) you will return an array containing 0.<br>
- With (0, -3) you will return an array containing 0, -1, -2 and -3.<br>


RESOLUÇÃO:<br>



# 3 paramsum
ARQUIVOS ESPERADOS: paramsum.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that displays the number of arguments passed to it, followed by a newline.

If there are no arguments, just display a 0 followed by a newline.


EXEMPLOS:<br>
$>./paramsum 1 2 3 5 7 24<br>
6<br>
$>./paramsum 6 12 24 | cat -e<br>
3$<br>
$>./paramsum | cat -e<br>
0$<br>
$><br>


RESOLUÇÃO:<br>



# 3 str_capitalizer
ARQUIVOS ESPERADOS: str_capitalizer.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes one or several strings and, for each argument, capitalizes the first character of each word (If it's a letter, obviously), puts the rest in lowercase, and displays the result on the standard output, followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string. If a word only has one letter, it must be capitalized.

If there are no arguments, the progam must display \n.


EXEMPLOS:<br>
$> ./str_capitalizer | cat -e<br>
$<br>
$> ./str_capitalizer "Premier PETIT TesT" | cat -e<br>
Premier Petit Test$<br>
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e<br>
Deuxieme Test Un Peu Moins  Facile$<br>
   Attention C'est Pas Dur Quand Meme$<br>
Aller Un Dernier 0123456789pour La Route    E $<br>
$><br>


RESOLUÇÃO:<br>



# 3 lcm
ARQUIVOS ESPERADOS: lcm.c<br>
FUNÇÕES PERMITIDAS:<br>


ENUNCIADO:<br>
Escreva a function who takes two unsigned int as parameters and returns the computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and calculate as follows:

        LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

unsigned int    lcm(unsigned int a, unsigned int b);


RESOLUÇÃO:<br>



# 4 fprime
ARQUIVOS ESPERADOS: fprime.c<br>
FUNÇÕES PERMITIDAS: printf, atoi<br>


ENUNCIADO:<br>
Escreva a program that takes a positive int and displays its prime factors on the standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there's one, will be valid.


EXEMPLOS:<br>
$> ./fprime 225225 | cat -e<br>
3*3*5*5*7*11*13$<br>
$> ./fprime 8333325 | cat -e<br>
3*3*5*5*7*11*13*37$<br>
$> ./fprime 9539 | cat -e<br>
9539$<br>
$> ./fprime 804577 | cat -e<br>
804577$<br>
$> ./fprime 42 | cat -e<br>
2*3*7$<br>
$> ./fprime 1 | cat -e<br>
1$<br>
$> ./fprime | cat -e<br>
$<br>
$> ./fprime 42 21 | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 4 ft_list_foreach
ARQUIVOS ESPERADOS: ft_list_foreach.c, ft_list.h<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva a function that takes a list and a function pointer, and applies this function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called ft_list.h:

typedef struct    s_list<br>
{<br>
    struct s_list *next;<br>
    void          *data;<br>
}                 t_list;<br>


RESOLUÇÃO:<br>



# 4 ft_split
ARQUIVOS ESPERADOS: ft_split.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


ENUNCIADO:<br>
Escreva a function that takes a string, splits it into words, and returns them as a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/newlines, or by the start/end of the string.

Your function must be declared as follows:

char	**ft_split(char *str);


RESOLUÇÃO:<br>



# 4 rev_wstr
ARQUIVOS ESPERADOS: rev_wstr.c<br>
FUNÇÕES PERMITIDAS: write, malloc, free<br>


ENUNCIADO:<br>
Escreva a program that takes a string as a parameter, and prints its words in reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the begin/end of the string.

If the number of parameters is different from 1, the program will display '\n'.

In the parameters that are going to be tested, there won't be any "additional" spaces (meaning that there won't be additionnal spaces at the beginning or at the end of the string, and words will always be separated by exactly one space).


EXEMPLOS:<br>
$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e<br>
l'indifference de celui precede mepris du temps le$<br>
$> ./rev_wstr "abcdefghijklm"<br>
abcdefghijklm<br>
$> ./rev_wstr "il contempla le mont" | cat -e<br>
mont le contempla il$<br>
$> ./rev_wstr | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 4 ft_list_remove_if
ARQUIVOS ESPERADOS: ft_list_remove_if.c<br>
FUNÇÕES PERMITIDAS: free<br>


ENUNCIADO:<br>
Escreva a function called ft_list_remove_if that removes from the passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h<br>
typedef struct      s_list<br>
{<br>
    struct s_list   *next;<br>
    void            *data;<br>
}                   t_list;<br>
$><br>


RESOLUÇÃO:<br>



# 4 sort_int_tab
ARQUIVOS ESPERADOS: sort_int_tab.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size' members, in ascending order.

Doubles must be preserved.

Input is always coherent.


RESOLUÇÃO:<br>



# 4 sort_list
ARQUIVOS ESPERADOS: sort_list.c<br>
FUNÇÕES PERMITIDAS: <br>


ENUNCIADO:<br>
Escreva the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function pointer cmp to select the order to apply, and returns a pointer to the first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h that is provided to you. You must include that file (#include "list.h"), but you must not turn it in. We will use our own to compile your assignment.

Functions passed as cmp will always return a value different from 0 if a and b are in the right order, 0 otherwise.

For EXEMPLOS, the following function used as cmp will sort the list in ascending order:

int ascending(int a, int b)<br>
{<br>
	return (a <= b);<br>
}<br>


RESOLUÇÃO:<br>



# 4 ft_itoa
ARQUIVOS ESPERADOS: ft_itoa.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


ENUNCIADO:<br>
Escreva a function that takes an int and converts it to a null-terminated string. The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);


RESOLUÇÃO:<br>



# 4 check_mate
ARQUIVOS ESPERADOS: *.c, *.h<br>
FUNÇÕES PERMITIDAS: write, malloc, free<br>


ENUNCIADO:<br>
Escreva a program who takes rows of a chessboard in argument and check if your King is in a check position.

Chess is played on a chessboard, a squared board of 8-squares length with specific pieces on it : King, Queen, Bishop, Knight, Rook and Pawns. For this exercice, you will only play with Pawns, Bishops, Rooks and Queen... and obviously a King.

Each piece have a specific method of movement, and all patterns of capture are detailled in the EXEMPLOS.txt file.

A piece can capture only the first ennemy piece it founds on its capture patterns.

The board have a variable size but will remains a square. There's only one King and all other pieces are against it. All other characters except those used for pieces are considered as empty squares.

The King is considered as in a check position when an other enemy piece can capture it. When it's the case, you will print "Success" on the standard output followed by a newline, otherwise you will print "Fail" followed by a newline.

If there is no arguments, the program will only print a newline.


EXEMPLOS:<br>
$> ./check_mate '..' '.K' | cat -e<br>
Fail$<br>
$> ./check_mate 'R...' '.K..' '..P.' '....' | cat -e<br>
Success$<br>
$> ./check_mate 'R...' 'iheK' '....' 'jeiR' | cat -e<br>
Success$<br>
$> ./check_mate | cat -e<br>
$<br>
$><br>
*************************************************<br>
Some subject.en.txts on the web have this EXEMPLOS:<br>
$> ./chessmate 'R...' '..P.' '.K..' '....' | cat -e<br>
Success$<br>
Which would indicate that checks need to be down both ways.<br>
Most solutions will:<br>
Fail$<br>
As they are only checking in one direction.<br>
*************************************************<br>


RESOLUÇÃO:<br>



# 4 rostring
ARQUIVOS ESPERADOS: rostring.c<br>
FUNÇÕES PERMITIDAS: write, malloc, free<br>


ENUNCIADO:<br>
Escreva a program that takes a string and displays this string after rotating it one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.


EXEMPLOS:<br>
$>./rostring "abc   " | cat -e<br>
abc$<br>
$><br>
$>./rostring "Que la      lumiere soit et la lumiere fut"<br>
la lumiere soit et la lumiere fut Que<br>
$><br>
$>./rostring "     AkjhZ zLKIJz , 23y"<br>
zLKIJz , 23y AkjhZ<br>
$><br>
$>./rostring | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 5 brainfuck
ARQUIVOS ESPERADOS: *.c, *.h<br>
FUNÇÕES PERMITIDAS: write, malloc, free<br>


ENUNCIADO:<br>
Escreva a Brainfuck interpreter program.

The source code will be given as first parameter.

The code will always be valid, with no more than 4096 operations.

Brainfuck is a minimalist language. It consists of an array of bytes (in our case, let's say 2048 bytes) initialized to zero, and a pointer to its first byte.

Every operator consists of a single character:<br>
- '>' increment the pointer;<br>
- '<' decrement the pointer;<br>
- '+' increment the pointed byte;<br>
- '-' decrement the pointed byte;<br>
- '.' print the pointed byte on standard output;<br>
- '[' go to the matching ']' if the pointed byte is 0 (while start);<br>
- ']' go to the matching '[' if the pointed byte is not 0 (while end).<br>

Any other character is a comment.


EXEMPLOS:<br>
$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-] >++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.<br>
Hello World!$<br>
$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>><br>
Hi$<br>
$>./brainfuck | cat -e<br>
$<br>


RESOLUÇÃO:<br>



# 5 print_memory
ARQUIVOS ESPERADOS: print_memory.c<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a function that takes (const void *addr, size_t size), and displays the memory as in the exemplos.

Your function must be declared as follows:

void	print_memory(const void *addr, size_t size);


$> cat main.c<br>
void	print_memory(const void *addr, size_t size);<br>
<br>
int	main(void)<br>
{<br>
	int	tab[10] = {0, 23, 150, 255,<br>
	              12, 16,  21, 42};<br>
<br>
	print_memory(tab, sizeof(tab));<br>
	return (0);<br>
}<br>
$> gcc -Wall -Wall -Werror main.c print_memory.c && ./a.out | cat -e<br>
0000 0000 1700 0000 9600 0000 ff00 0000 ................$<br>
0c00 0000 1000 0000 1500 0000 2a00 0000 ............*...$<br>
0000 0000 0000 0000                     ........$<br>


RESOLUÇÃO:<br>



# 5 ft_itoa_base
ARQUIVOS ESPERADOS: ft_itoa_base.c<br>
FUNÇÕES PERMITIDAS: malloc<br>


ENUNCIADO:<br>
Escreva a function that converts an integer value to a null-terminated string using the specified base and stores the result in a char array that you must allocate.

The base is expressed as an integer, from 2 to 16. The characters comprising the base are the digits from 0 to 9, followed by uppercase letter from A to F.

For EXEMPLOS, base 4 would be "0123" and base 16 "0123456789ABCDEF".

If base is 10 and value is negative, the resulting string is preceded with a minus sign (-). With any other base, value is always considered unsigned.

Your function must be declared as follows:

char	*ft_itoa_base(int value, int base);


RESOLUÇÃO:<br>



# 5 brackets
ARQUIVOS ESPERADOS: *.c *.h<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes an undefined number of strings in arguments. For each argument, the program prints on the standard output "OK" followed by a newline if the expression is correctly bracketed, otherwise it prints "Error" followed by a newline.

Symbols considered as 'brackets' are brackets '(' and ')', square brackets '[' and ']'and braces '{' and '}'. Every other symbols are simply ignored.

An opening bracket must always be closed by the good closing bracket in the correct order. A string which not contains any bracket is considered as a correctly bracketed string.

If there is no arguments, the program must print only a newline.


EXEMPLOS:<br>
$> ./brackets '(johndoe)' | cat -e<br>
OK$<br>
$> ./brackets '([)]' | cat -e<br>
Error$<br>
$> ./brackets '' '{[(0 + 0)(1 + 1)](3*(-1)){()}}' | cat -e<br>
OK$<br>
OK$<br>
$> ./brackets | cat -e<br>
$<br>
$><br>


RESOLUÇÃO:<br>



# 5 rpn_calc
ARQUIVOS ESPERADOS: *.c, *.h <br>
FUNÇÕES PERMITIDAS: atoi, printf, write, malloc, free<br>


ENUNCIADO:<br>
Escreva a program that takes a string which contains an equation written in Reverse Polish notation (RPN) as its first argument, evaluates the equation, and prints the result on the standard output followed by a newline. 

Reverse Polish Notation is a mathematical notation in which every operator follows all of its operands. In RPN, every operator encountered evaluates the previous 2 operands, and the result of this operation then becomes the first of the two operands for the subsequent operator. Operands and operators must be spaced by at least one space.

You must implement the following operators : "+", "-", "*", "/", and "%".

If the string isn't valid or there isn't exactly one argument, you must print "Error" on the standard output followed by a newline.

All the given operands must fit in a "int".

EXEMPLOS of formulas converted in RPN:<br>

3 + 4                   >>    3 4 +<br>
((1 * 2) * 3) - 4       >>    1 2 * 3 * 4 -  ou  3 1 2 * * 4 -<br>
50 * (5 - (10 / 9))     >>    5 10 9 / - 50 *<br>
<br>
Here's how to evaluate a formula in RPN:<br>

1 2 * 3 * 4 -<br>
2 3 * 4 -<br>
6 4 -<br>
2<br>
<br>
Or:<br>
<br>
3 1 2 * * 4 -<br>
3 2 * 4 -<br>
6 4 -<br>
2<br>
<br>

EXEMPLOS:<br><br>
$> ./rpn_calc "1 2 * 3 * 4 +" | cat -e<br>
10$<br>
$> ./rpn_calc "1 2 3 4 +" | cat -e<br>
Error$<br>
$> ./rpn_calc |cat -e<br>
Error$<br>


RESOLUÇÃO:<br>



# 5 options
ARQUIVOS ESPERADOS: *.c *.h<br>
FUNÇÕES PERMITIDAS: write<br>


ENUNCIADO:<br>
Escreva a program that takes an undefined number of arguments which could be considered as options and writes on standard output a representation of those options as groups of bytes followed by a newline.

An option is an argument that begins by a '-' and have multiple characters which could be : abcdefghijklmnopqrstuvwxyz

All options are stocked in a single int and each options represents a bit of that int, and should be stocked like this: 

00000000 00000000 00000000 00000000<br>
******zy xwvutsrq ponmlkji hgfedcba

Launch the program without arguments or with the '-h' flag activated must print an usage on the standard output, as shown in the following EXEMPLOS.

A wrong option must print "Invalid Option" followd by a newline.


EXEMPLOS:<br>
$>./options<br>
options: abcdefghijklmnopqrstuvwxyz<br>
$>./options -abc -ijk<br>
00000000 00000000 00000111 00000111<br>
$>./options -z<br>
00000010 00000000 00000000 00000000<br>
$>./options -abc -hijk<br>
options: abcdefghijklmnopqrstuvwxyz<br>
$>./options -%<br>
Invalid Option<br>


RESOLUÇÃO:<br>