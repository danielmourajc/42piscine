EXAMES RESOLVIDOS PISCINE 42

--------------------------------
EXERCÍCIO: 0-0-aff_a
ARQUIVOS ESPERADOS: aff_a.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba uma string e exiba o primeiro caractere `a` encontrado nele, seguido por uma nova linha. Se não houver caracteres `a` na string, o programa apenas escreve uma nova linha. Se o número de parâmetros não for 1, o programa exibe `a` seguido por uma nova linha.


EXEMPLOS:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$


RESOLUÇÃO:
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			if (argv[1][i] == `a`)
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


--------------------------------
EXERCÍCIO: 0-0-ft_countdown
ARQUIVOS ESPERADOS: ft_countdown.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que exiba todos os dígitos em ordem decrescente, seguidos por um nova linha.


EXEMPLOS:
$> ./ft_countdown | cat -e
9876543210$
$>


RESOLUÇÃO:
#include <unistd.h>

int	main(void)
{
	char	n;

	n = `9`;
	while(n >= `0`)
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 0-0-ft_print_numbers
ARQUIVOS ESPERADOS: ft_print_numbers.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva uma função que exiba todos os dígitos em ordem crescente.

Sua função deve ser declarada da seguinte forma:

void	ft_print_numbers(void);


RESOLUÇÃO:
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = `0`;
	while (n <= `9`)
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);
}


--------------------------------
EXERCÍCIO: 0-0-hello
ARQUIVOS ESPERADOS: hello.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que exiba "Hello World!" seguido por um \n.


EXEMPLOS:
$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>


RESOLUÇÃO:
#include <unistd.h>

int	main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}


--------------------------------
EXERCÍCIO: 0-0-maff_alpha
ARQUIVOS ESPERADOS: maff_alpha.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que exiba o alfabeto, com letras pares em maiúsculas, e letras ímpares em minúsculas, seguidas por uma nova linha.


EXEMPLOS:
$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$


RESOLUÇÃO:
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
	ft_putchar(`\n`);
	return (0);
}


--------------------------------
EXERCÍCIO: 0-1-aff_first_param
ARQUIVOS ESPERADOS: aff_first_param.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba strings como argumentos e exiba seu primeiro argumento seguido por um \n.

Se o número de argumentos for menor que 1, o programa exibirá \n.


EXEMPLOS:
$> ./aff_first_param vincent mit "l`ane" dans un pre et "s`en" vint | cat -e
vincent$
$> ./aff_first_param "jaime le fromage de chevre" | cat -e
jaime le fromage de chevre$
$> ./aff_first_param
$


RESOLUÇÃO:
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[1])
			write(1, argv[1]++, 1);
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 0-1-aff_last_param
ARQUIVOS ESPERADOS: aff_last_param.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba strings como argumentos e exiba seu último argumento seguido por uma nova linha.

Se o número de argumentos for menor que 1, o programa exibirá uma nova linha.


EXEMPLOS:
$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "jaime le savon" | cat -e
jaime le savon$
$> ./aff_last_param
$


RESOLUÇÃO:
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 0-1-maff_revalpha
ARQUIVOS ESPERADOS: maff_revalpha.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que mostre o alfabeto ao contrário, com letras pares em maiúsculas e letras ímpares em minúsculas, seguidas de uma nova linha.


EXEMPLOS:
$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$


RESOLUÇÃO:
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


--------------------------------
EXERCÍCIO: 0-1-only_a
ARQUIVOS ESPERADOS: only_a.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que exiba um caractere `a` na saída padrão.


RESOLUÇÃO:
#include <unistd.h>

int	main(void)
{
	write(1, "a", 1);
	return(0);
}


--------------------------------
EXERCÍCIO: 0-1-only_z
ARQUIVOS ESPERADOS: only_z.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que exiba um caractere `z` na saída padrão.


RESOLUÇÃO:
#include <unistd.h>

int	main(void)
{
	write(1, "z", 1);
	return(0);
}


--------------------------------
EXERCÍCIO: 0-2-aff_z
ARQUIVOS ESPERADOS: aff_z.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba uma string e exiba o primeiro `z` caractere que encontra nele, seguido por uma nova linha. Se não houver caracteres `z` na string, o programa escreve `z` seguido por uma nova linha. Se o número de parâmetros não for 1, o programa exibe `z` seguido por uma nova linha.


EXEMPLOS:
$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$


RESOLUÇÃO:
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
		while (*av[1][i])
		{
			if (*av[1][i] == `z`)
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


--------------------------------
EXERCÍCIO: 1-0-ft_strcpy
ARQUIVOS ESPERADOS: ft_strcpy.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Reproduza o comportamento da função strcpy (man strcpy).

Sua função deve ser declarada da seguinte forma:

char	*ft_strcpy(char *dest, char *src);


RESOLUÇÃO:
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = `\0`;
	return (dest);
}


--------------------------------
EXERCÍCIO: 1-0-ft_strlen
ARQUIVOS ESPERADOS: ft_strlen.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva uma função que retorne o comprimento de uma string.

Sua função deve ser declarada da seguinte forma:

int	ft_strlen(char *str);


RESOLUÇÃO:
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


--------------------------------
EXERCÍCIO: 1-0-repeat_alpha
ARQUIVOS ESPERADOS: repeat_alpha.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa chamado repeat_alpha que receba uma string e a exiba repetindo cada caractere alfabético tantas vezes quanto seu índice alfabético, seguido por uma nova linha.

`a` vira `a`, `b` vira `bb`, `e` vira `eeee`, etc...

Caso permanece inalterado.

Se o número de argumentos não for 1, basta exibir uma nova linha.


EXEMPLOS:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha `abacadaba 42!` | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>


RESOLUÇÃO:
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
			if (av[1][i] >= `a` && av[1][i] <= `z`)
				repeat = av[1][i] - `a` + 1;
			else if (av[1][i] >= `A` && av[1][i] <= `Z`)
				repeat = av[1][i] - `A` + 1;
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


--------------------------------
EXERCÍCIO: 1-0-search_and_replace
ARQUIVOS ESPERADOS: search_and_replace.c
FUNÇÕES PERMITIDAS: write, exit


ENUNCIADO:
Escreva um programa chamado search_and_replace que receba 3 argumentos, o primeiro argumentos é uma string na qual substituir uma letra (2º argumento) por outro (3º argumento).

Se o número de argumentos não for 3, basta exibir uma nova linha.

Se o segundo argumento não estiver contido no primeiro (a string) então o programa simplesmente reescreve a string seguida por uma nova linha.


EXEMPLOS:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $


RESOLUÇÃO:
#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 4)
	{
		while(av[1][i])
		{
			if(av[2][i] == `\0` && av[3][i] == `\0`)
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


--------------------------------
EXERCÍCIO: 1-0-ulstr
ARQUIVOS ESPERADOS: ulstr.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba uma string e inverta as maiúsculas e minúsculas de todas as suas letras.
Outros caracteres permanecem inalterados.

Você deve exibir o resultado seguido por um `\n`.

Se o número de argumentos não for 1, o programa exibirá `\n`.


EXEMPLOS:
$>./ulstr "LeSPrit nE peUt plUs pRogResSer s`Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
LeSPrit Ne PEuT PLuS PrOGrESsER S`iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S`enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s`ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m`en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M`EN kA FE FOT$
$>./ulstr | cat -e
$


RESOLUÇÃO:
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
			if (argv[1][i] >= `A` && `Z` >= argv[1][i])
				letter += 32;
			if (argv[1][i] >= `a` && `z` >= argv[1][i])
				letter -= 32;
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 1-1-rot_13
ARQUIVOS ESPERADOS: rot_13.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela letra 13 espaços à frente em ordem alfabética.

`z` torna-se `m` e `Z` torna-se `M`. Caso permanece inalterado.

A saída será seguida por uma nova linha.

Se o número de argumentos não for 1, o programa exibirá uma nova linha.


EXEMPLOS:
$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>


RESOLUÇÃO:
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= `a` && argv[1][i] <= `m`) || (argv[1][i] >= `A` && argv[1][i] <= `M`))
				argv[1][i] += 13;
			else if ((argv[1][i] >= `n` && argv[1][i] <= `z`) || (argv[1][i] >= `N` && argv[1][i] <= `Z`))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 1-2-first_word
ARQUIVOS ESPERADOS: first_word.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba uma string e exiba sua primeira palavra, seguida por um nova linha.

Uma palavra é uma seção de string delimitada por espaços/tabulações ou pelo início/fim da string.

Se o número de parâmetros não for 1, ou se não houver palavras, basta exibir uma nova linha.


EXEMPLOS:
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this		...	   is sparta, then again, maybe	not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>


RESOLUÇÃO:
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ` ` || *av[1] == `\t` || *av[1] == `\n` || *av[1] == `\r` || *av[1] == `\v` || *av[1] == `\f`))
			++av[1];
		while (*av[1] != `\0` && (*av[1] != ` ` && *av[1] != `\t` && *av[1] != `\n` && *av[1] != `\r` && *av[1] != `\v` && *av[1] != `\f`))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 1-2-ft_putstr
ARQUIVOS ESPERADOS: ft_putstr.c
FUNÇÕES PERMITIDAS: write

ENUNCIADO:
Escreva uma função que exiba uma string na saída padrão.

O ponteiro passado para a função contém o endereço da primeira string
personagem.

Sua função deve ser declarada da seguinte forma:

void	ft_putstr(char *str);


RESOLUÇÃO:
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}


--------------------------------
EXERCÍCIO: 1-2-ft_swap
ARQUIVOS ESPERADOS: ft_swap.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva uma função que troque o conteúdo de dois inteiros cujos endereços
são passados como parâmetros.

Sua função deve ser declarada da seguinte forma:

void	ft_swap(int *a, int *b);


RESOLUÇÃO:
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


--------------------------------
EXERCÍCIO: 1-3-rev_print
ARQUIVOS ESPERADOS: rev_print.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba uma string e exiba a string ao contrário seguido por uma nova linha.

Se o número de parâmetros não for 1, o programa exibe uma nova linha.


EXEMPLOS:
$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$


RESOLUÇÃO:
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


--------------------------------
EXERCÍCIO: 1-4-rotone
ARQUIVOS ESPERADOS: rotone.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela próxima em ordem alfabética.

`z` torna-se `a` e `Z` torna-se `A`. Caso permanece inalterado.

A saída será seguida por um \n.

Se o número de argumentos não for 1, o programa exibirá \n.


EXEMPLOS:
$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>


RESOLUÇÃO:
int	main(int argc, char *argv[])
{
	int	i;
	char	str;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			str = argv[1][i];
			if (argv[1][i] >= `A` && argv[1][i] <= `Y`)
				str++;
			if (argv[1][i] >= `a` && argv[1][i] <= `y`)
				str++;
			if (argv[1][i] == `Z` || argv[1][i] == `z`)
				str = str - 25;
			write(1, &str, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


--------------------------------
EXERCÍCIO: 2-0-fizzbuzz
ARQUIVOS ESPERADOS: fizzbuzz.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que imprima os números de 1 a 100, cada um separado por uma nova linha.

Se o número for um múltiplo de 3, ele imprimirá `fizz` em vez disso.

Se o número for um múltiplo de 5, ele imprimirá `buzz` em vez disso.

Se o número for múltiplo de 3 e múltiplo de 5, ele imprimirá `fizzbuzz`.


EXEMPLOS:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>


RESOLUÇÃO:
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


--------------------------------
EXERCÍCIO: 2-0-ft_atoi
ARQUIVOS ESPERADOS: ft_atoi.c
FUNÇÕES PERMITIDAS: None


ENUNCIADO:
Escreva uma função que converta o argumento string str em um inteiro (tipo int) e retorne ele.

Funciona muito parecido com a função padrão atoi(const char *str), veja o man.

Sua função deve ser declarada da seguinte forma:

int	ft_atoi(const char *str);


RESOLUÇÃO:

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ` ` || (*str >= 9 && *str <= 13))
		str++;
	if (*str == `-`)
		sign = -1;
	if (*str == `-` || *str == `+`)
		str++;
	while (*str >= `0` && *str <= `9`)
	{
		result = result * 10 + *str - `0`;
		str++;
	}
	return (sign * result);
}


--------------------------------
EXERCÍCIO: 2-0-ft_strdup
ARQUIVOS ESPERADOS: ft_strdup.c
FUNÇÕES PERMITIDAS: malloc


Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char	*ft_strdup(char *src);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-0-inter
ARQUIVOS ESPERADOS: inter.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa que receba duas strings e exiba, sem doubles, os caracteres que aparecem em ambas as strings, na ordem em que aparecem na primeira.

A exibição será seguida por um \n.

Se o número de argumentos não for 2, o programa exibirá \n.


EXEMPLOS:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-0-last_word
ARQUIVOS ESPERADOS: last_word.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of the string.

If the number of parameters is not 1, or there are no words, display a newline.


EXEMPLOS:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this		...	   is sparta, then again, maybe	not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-0-reverse_bits
ARQUIVOS ESPERADOS: reverse_bits.c
FUNÇÕES PERMITIDAS:


ENUNCIADO:
Escreva a function that takes a byte, reverses it, bit by bit (like the EXEMPLOS) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);


EXEMPLOS:
1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-0-swap_bits
ARQUIVOS ESPERADOS: swap_bits.c
FUNÇÕES PERMITIDAS:


ENUNCIADO:
Escreva a function that takes a byte, swaps its halves (like the EXEMPLOS) and returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);


EXEMPLOS:
1 byte
_____________
 0100 | 0001
	 \ /
	 / \
 0001 | 0100


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-0-union
ARQUIVOS ESPERADOS: union.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and will be followed by a \n.

If the number of arguments is not 2, the program displays \n.


EXEMPLOS:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-1-alpha_mirror
ARQUIVOS ESPERADOS: alpha_mirror.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program called alpha_mirror that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.

`a` becomes `z`, `Z` becomes `A`
`d` becomes `w`, `M` becomes `N`

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.


EXEMPLOS:
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-1-max
ARQUIVOS ESPERADOS: max.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva the following function:

int	max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-3-wdmatch
ARQUIVOS ESPERADOS: wdmatch.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes two strings and checks whether it`s possible to write the first string with characters from the second string, while respecting the order in which these characters appear in the second string.

If it`s possible, the program displays the string, followed by a \n, otherwise it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.


EXEMPLOS:
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-4-do_op
ARQUIVOS ESPERADOS: *.c, *.h
FUNÇÕES PERMITIDAS: atoi, printf, write


ENUNCIADO:
Escreva a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation, followed by a newline. If the number of parameters is not 3, the program just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative numbers, in input or output, will have one and only one leading `-`. The result of the operation fits in an int.


EXEMPLOS:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-4-print_bits
ARQUIVOS ESPERADOS: print_bits.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a function that takes a byte, and prints it in binary WITHOUT A NEWLINE AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

EXEMPLOS:
se você passar 2 para print_bits, ele imprimirá "00000010"


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-5-ft_strcmp
ARQUIVOS ESPERADOS: ft_strcmp.c
FUNÇÕES PERMITIDAS: 


Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int	ft_strcmp(char *s1, char *s2);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-5-ft_strrev
ARQUIVOS ESPERADOS: ft_strrev.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char	*ft_strrev(char *str);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 2-6-is_power_of_2
ARQUIVOS ESPERADOS: is_power_of_2.c
FUNÇÕES PERMITIDAS: None


ENUNCIADO:
Escreva a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int		is_power_of_2(unsigned int n);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-add_prime_sum
ARQUIVOS ESPERADOS: add_prime_sum.c
FUNÇÕES PERMITIDAS: write, exit


ENUNCIADO:
Escreva a program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.

Sim, os exemplos estão certos.


EXEMPLOS:
$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-epur_str
ARQUIVOS ESPERADOS: epur_str.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes a string, and displays this string with exactly one space between words, with no spaces or tabs either at the beginning or the end, followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the program displays \n.


EXEMPLOS:
$> ./epur_str "vous voyez cest facile dafficher la meme chose" | cat -e
vous voyez cest facile dafficher la meme chose$
$> ./epur_str " seulement		  la cest	  plus dur " | cat -e
seulement la cest plus dur$
$> ./epur_str "comme cest cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-ft_list_size
ARQUIVOS ESPERADOS: ft_list_size.c, ft_list.h
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva a function that returns the number of elements in the linked list that`s passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called ft_list.h:

typedef struct	s_list
{
	struct s_list *next;
	void		  *data;
}				 t_list;


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-ft_rrange
ARQUIVOS ESPERADOS: ft_rrange.c
FUNÇÕES PERMITIDAS: malloc


ENUNCIADO:
Escreva the following function:

int	*ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at end and end at start (Including start and end !), then return a pointer to the first value of the array.


EXEMPLOS:
- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-hidenp
ARQUIVOS ESPERADOS: hidenp.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva um programa chamado hidenp que receba duas strings e exiba 1 seguido de uma nova linha se a primeira string estiver oculta na segunda, caso contrário, exiba 0 seguido de uma nova linha.

Sejam s1 e s2 strings. Dizemos que s1 está oculto em s2 se for possível encontrar cada caractere de s1 em s2, na mesma ordem em que aparecem em s1. Além disso, a string vazia fica oculta em qualquer string.

Se o número de parâmetros não for 2, o programa exibe uma nova linha.


EXEMPLOS:
$> ./hidenp "amais" "amaskiddlasdewhlaamaid" | cat -e
1$
$> ./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$> ./hidenp "abc" "btarc" | cat -e
0$
$> ./hidenp | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-pgcd
ARQUIVOS ESPERADOS: pgcd.c
FUNÇÕES PERMITIDAS: printf, atoi, malloc, free


ENUNCIADO:
Escreva a program that takes two strings representing two strictly positive integers that fit in an int.

Display their highest common denominator followed by a newline (It`s always a strictly positive integer).

If the number of parameters is not 2, display a newline.


EXEMPLOS:
$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e 
1$
$> ./pgcd | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-print_hex
ARQUIVOS ESPERADOS: print_hex.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes a positive (or zero) number expressed in base 10, and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.


EXEMPLOS:
$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-0-rstr_capitalizer
ARQUIVOS ESPERADOS: rstr_capitalizer.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes one or more strings and, for each argument, puts the last character of each word (if it`s a letter) in uppercase and the rest in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the string. If a word has a single letter, it must be capitalized.

If there are no parameters, display \n.


EXEMPLOS:
$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
premieR petiT tesT$
$> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention cest pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE	E " | cat -e
deuxiemE tesT uN peU moinS  facilE$
   attentioN cest paS duR quanD memE$
alleR uN dernieR 0123456789pouR lA routE	E $
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-1-expand_str
ARQUIVOS ESPERADOS: expand_str.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes a string and displays it with exactly three spaces between each word, with no spaces or tabs either at the beginning or the end, followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display a newline.


EXEMPLOS:
$> ./expand_str "vous   voyez   cest   facile   dafficher   la   meme   chose" | cat -e
vous   voyez   cest   facile   dafficher   la   meme   chose$
$> ./expand_str " seulement		  la cest	  plus dur " | cat -e
seulement   la   cest   plus   dur$
$> ./expand_str "comme cest cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-1-tab_mult
ARQUIVOS ESPERADOS: tab_mult.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that displays a number`s multiplication table.

The parameter will always be a strictly positive number that fits in an int, and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.


EXEMPLOS:
$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-2-ft_atoi_base
ARQUIVOS ESPERADOS: ft_atoi_base.c
FUNÇÕES PERMITIDAS: None


ENUNCIADO:
Escreva a function that converts the string argument str (base N <= 16) to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef Those are, of course, to be trimmed according to the requested base. Por exemplo, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs (`-`) are interpreted only if they are the first character of the string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-3-ft_range
ARQUIVOS ESPERADOS: ft_range.c
FUNÇÕES PERMITIDAS: malloc


ENUNCIADO:
Escreva the following function:

int	*ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end (Including start and end !), then return a pointer to the first value of the array.


EXEMPLOS:
- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-4-paramsum
ARQUIVOS ESPERADOS: paramsum.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that displays the number of arguments passed to it, followed by a newline.

If there are no arguments, just display a 0 followed by a newline.


EXEMPLOS:
$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-4-str_capitalizer
ARQUIVOS ESPERADOS: str_capitalizer.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes one or several strings and, for each argument, capitalizes the first character of each word (If it`s a letter, obviously), puts the rest in lowercase, and displays the result on the standard output, followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string. If a word only has one letter, it must be capitalized.

If there are no arguments, the progam must display \n.


EXEMPLOS:
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "Premier PETIT TesT" | cat -e
Premier Petit Test$
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention cest pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE	E " | cat -e
Deuxieme Test Un Peu Moins  Facile$
   Attention cest Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route	E $
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 3-4-lcm
ARQUIVOS ESPERADOS: lcm.c
FUNÇÕES PERMITIDAS:


ENUNCIADO:
Escreva a function who takes two unsigned int as parameters and returns the computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and calculate as follows:

		LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

unsigned int	lcm(unsigned int a, unsigned int b);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-0-fprime
ARQUIVOS ESPERADOS: fprime.c
FUNÇÕES PERMITIDAS: printf, atoi


ENUNCIADO:
Escreva a program that takes a positive int and displays its prime factors on the standard output, followed by a newline.

Factors must be displayed in ascending order and separated by `*`, so that the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there`s one, will be valid.


EXEMPLOS:
$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-0-ft_list_foreach
ARQUIVOS ESPERADOS: ft_list_foreach.c, ft_list.h
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva a function that takes a list and a function pointer, and applies this function to each element of the list.

It must be declared as follows:

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called ft_list.h:

typedef struct	s_list
{
	struct s_list *next;
	void		  *data;
}				 t_list;


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-0-ft_split
ARQUIVOS ESPERADOS: ft_split.c
FUNÇÕES PERMITIDAS: malloc


ENUNCIADO:
Escreva a function that takes a string, splits it into words, and returns them as a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/newlines, or by the start/end of the string.

Your function must be declared as follows:

char	**ft_split(char *str);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-1-rev_wstr
ARQUIVOS ESPERADOS: rev_wstr.c
FUNÇÕES PERMITIDAS: write, malloc, free


ENUNCIADO:
Escreva a program that takes a string as a parameter, and prints its words in reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the begin/end of the string.

If the number of parameters is different from 1, the program will display `\n`.

In the parameters that are going to be tested, there won`t be any "additional" spaces (meaning that there won`t be additionnal spaces at the beginning or at the end of the string, and words will always be separated by exactly one space).


EXEMPLOS:
$> ./rev_wstr "le temps du mepris precede celui de l`indifference" | cat -e
l`indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-2-ft_list_remove_if
ARQUIVOS ESPERADOS: ft_list_remove_if.c
FUNÇÕES PERMITIDAS: free


ENUNCIADO:
Escreva a function called ft_list_remove_if that removes from the passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct	  s_list
{
	struct s_list   *next;
	void			*data;
}				   t_list;
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-3-sort_int_tab
ARQUIVOS ESPERADOS: sort_int_tab.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the `tab` int array, that contains exactly `size` members, in ascending order.

Doubles must be preserved.

Input is always coherent.


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-3-sort_list
ARQUIVOS ESPERADOS: sort_list.c
FUNÇÕES PERMITIDAS: 


ENUNCIADO:
Escreva the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function pointer cmp to select the order to apply, and returns a pointer to the first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h that is provided to you. You must include that file (#include "list.h"), but you must not turn it in. We will use our own to compile your assignment.

Functions passed as cmp will always return a value different from 0 if a and b are in the right order, 0 otherwise.

For EXEMPLOS, the following function used as cmp will sort the list in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-4-ft_itoa
ARQUIVOS ESPERADOS: ft_itoa.c
FUNÇÕES PERMITIDAS: malloc


ENUNCIADO:
Escreva a function that takes an int and converts it to a null-terminated string. The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-5-check_mate
ARQUIVOS ESPERADOS: *.c, *.h
FUNÇÕES PERMITIDAS: write, malloc, free


ENUNCIADO:
Escreva a program who takes rows of a chessboard in argument and check if your King is in a check position.

Chess is played on a chessboard, a squared board of 8-squares length with specific pieces on it : King, Queen, Bishop, Knight, Rook and Pawns. For this exercice, you will only play with Pawns, Bishops, Rooks and Queen... and obviously a King.

Each piece have a specific method of movement, and all patterns of capture are detailled in the EXEMPLOS.txt file.

A piece can capture only the first ennemy piece it founds on its capture patterns.

The board have a variable size but will remains a square. There`s only one King and all other pieces are against it. All other characters except those used for pieces are considered as empty squares.

The King is considered as in a check position when an other enemy piece can capture it. When it`s the case, you will print "Success" on the standard output followed by a newline, otherwise you will print "Fail" followed by a newline.

If there is no arguments, the program will only print a newline.


EXEMPLOS:
$> ./check_mate `..` `.K` | cat -e
Fail$
$> ./check_mate `R...` `.K..` `..P.` `....` | cat -e
Success$
$> ./check_mate `R...` `iheK` `....` `jeiR` | cat -e
Success$
$> ./check_mate | cat -e
$
$>
*************************************************
Some subject.en.txts on the web have this EXEMPLOS:
$> ./chessmate `R...` `..P.` `.K..` `....` | cat -e
Success$
Which would indicate that checks need to be down both ways.
Most solutions will:
Fail$
As they are only checking in one direction.
*************************************************


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 4-6-rostring
ARQUIVOS ESPERADOS: rostring.c
FUNÇÕES PERMITIDAS: write, malloc, free


ENUNCIADO:
Escreva a program that takes a string and displays this string after rotating it one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.

Words will be separated by only one space in the output.

If there`s less than one argument, the program displays \n.


EXEMPLOS:
$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la	  lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "	 AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-0-brainfuck
ARQUIVOS ESPERADOS: *.c, *.h
FUNÇÕES PERMITIDAS: write, malloc, free


ENUNCIADO:
Escreva a Brainfuck interpreter program.

The source code will be given as first parameter.

The code will always be valid, with no more than 4096 operations.

Brainfuck is a minimalist language. It consists of an array of bytes (in our case, let`s say 2048 bytes) initialized to zero, and a pointer to its first byte.

Every operator consists of a single character :
- `>` increment the pointer ;
- `<` decrement the pointer ;
- `+` increment the pointed byte ;
- `-` decrement the pointed byte ;
- `.` print the pointed byte on standard output ;
- `[` go to the matching `]` if the pointed byte is 0 (while start) ;
- `]` go to the matching `[` if the pointed byte is not 0 (while end).

Any other character is a comment.


EXEMPLOS:
$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-] >++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.
Hello World!$
$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>
Hi$
$>./brainfuck | cat -e
$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-1-print_memory
ARQUIVOS ESPERADOS: print_memory.c
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a function that takes (const void *addr, size_t size), and displays the memory as in the exemplos.

Your function must be declared as follows:

void	print_memory(const void *addr, size_t size);


$> cat main.c
void	print_memory(const void *addr, size_t size);

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
				  12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
$> gcc -Wall -Wall -Werror main.c print_memory.c && ./a.out | cat -e
0000 0000 1700 0000 9600 0000 ff00 0000 ................$
0c00 0000 1000 0000 1500 0000 2a00 0000 ............*...$
0000 0000 0000 0000					 ........$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-2-ft_itoa_base
ARQUIVOS ESPERADOS: ft_itoa_base.c
FUNÇÕES PERMITIDAS: malloc


ENUNCIADO:
Escreva a function that converts an integer value to a null-terminated string using the specified base and stores the result in a char array that you must allocate.

The base is expressed as an integer, from 2 to 16. The characters comprising the base are the digits from 0 to 9, followed by uppercase letter from A to F.

For EXEMPLOS, base 4 would be "0123" and base 16 "0123456789ABCDEF".

If base is 10 and value is negative, the resulting string is preceded with a minus sign (-). With any other base, value is always considered unsigned.

Your function must be declared as follows:

char	*ft_itoa_base(int value, int base);


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-3-brackets
ARQUIVOS ESPERADOS: *.c *.h
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes an undefined number of strings in arguments. For each argument, the program prints on the standard output "OK" followed by a newline if the expression is correctly bracketed, otherwise it prints "Error" followed by a newline.

Symbols considered as `brackets` are brackets `(` and `)`, square brackets `[` and `]`and braces `{` and `}`. Every other symbols are simply ignored.

An opening bracket must always be closed by the good closing bracket in the correct order. A string which not contains any bracket is considered as a correctly bracketed string.

If there is no arguments, the program must print only a newline.


EXEMPLOS:
$> ./brackets `(johndoe)` | cat -e
OK$
$> ./brackets `([)]` | cat -e
Error$
$> ./brackets `` `{[(0 + 0)(1 + 1)](3*(-1)){()}}` | cat -e
OK$
OK$
$> ./brackets | cat -e
$
$>


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-4-rpn_calc
ARQUIVOS ESPERADOS: *.c, *.h 
FUNÇÕES PERMITIDAS: atoi, printf, write, malloc, free


ENUNCIADO:
Escreva a program that takes a string which contains an equation written in Reverse Polish notation (RPN) as its first argument, evaluates the equation, and prints the result on the standard output followed by a newline. 

Reverse Polish Notation is a mathematical notation in which every operator follows all of its operands. In RPN, every operator encountered evaluates the previous 2 operands, and the result of this operation then becomes the first of the two operands for the subsequent operator. Operands and operators must be spaced by at least one space.

You must implement the following operators : "+", "-", "*", "/", and "%".

If the string isn`t valid or there isn`t exactly one argument, you must print "Error" on the standard output followed by a newline.

All the given operands must fit in a "int".

EXEMPLOS of formulas converted in RPN:

3 + 4				   >>	3 4 +
((1 * 2) * 3) - 4	   >>	1 2 * 3 * 4 -  ou  3 1 2 * * 4 -
50 * (5 - (10 / 9))	 >>	5 10 9 / - 50 *

Here`s how to evaluate a formula in RPN:

1 2 * 3 * 4 -
2 3 * 4 -
6 4 -
2

Or:

3 1 2 * * 4 -
3 2 * 4 -
6 4 -
2


EXEMPLOS:
$> ./rpn_calc "1 2 * 3 * 4 +" | cat -e
10$
$> ./rpn_calc "1 2 3 4 +" | cat -e
Error$
$> ./rpn_calc |cat -e
Error$


RESOLUÇÃO:


--------------------------------
EXERCÍCIO: 5-5-options
ARQUIVOS ESPERADOS: *.c *.h
FUNÇÕES PERMITIDAS: write


ENUNCIADO:
Escreva a program that takes an undefined number of arguments which could be considered as options and writes on standard output a representation of those options as groups of bytes followed by a newline.

An option is an argument that begins by a `-` and have multiple characters which could be : abcdefghijklmnopqrstuvwxyz

All options are stocked in a single int and each options represents a bit of that int, and should be stocked like this: 

00000000 00000000 00000000 00000000
******zy xwvutsrq ponmlkji hgfedcba

Launch the program without arguments or with the `-h` flag activated must print an usage on the standard output, as shown in the following EXEMPLOS.

A wrong option must print "Invalid Option" followd by a newline.


EXEMPLOS:
$>./options
options: abcdefghijklmnopqrstuvwxyz
$>./options -abc -ijk
00000000 00000000 00000111 00000111
$>./options -z
00000010 00000000 00000000 00000000
$>./options -abc -hijk
options: abcdefghijklmnopqrstuvwxyz
$>./options -%
Invalid Option


RESOLUÇÃO:
