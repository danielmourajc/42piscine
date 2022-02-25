#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
int myarray[10] = {1,2,3,4,5,6,7,8,9,10};
int size;
int *ptr;
int i;
int *lastarray;

size = 10;
ptr = myarray;
lastarray = (myarray+9);
i = 0;

ft_rev_int_tab(ptr, 10);

printf("First Array Value: %d\n", myarray[0]);
printf("Second Array Value: %d\n", myarray[1]);
printf("Third Array Value: %d\n", myarray[2]);
printf("Fourth Array Value: %d\n", myarray[3]);
printf("Fifth Array Value: %d\n", myarray[4]);
printf("Sixth Array Value: %d\n", myarray[5]);
printf("Seventh Array Value: %d\n", myarray[6]);
printf("Eight Array Value: %d\n", myarray[7]);
printf("Ninth Array Value: %d\n", myarray[8]);
printf("10th Array Value: %d\n", myarray[9]);
}
