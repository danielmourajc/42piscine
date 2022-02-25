#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
int myarray[10] = {10,2,3,4,5,6,7,8,9,1};
int size;

size = sizeof(myarray)/sizeof(myarray[0]);
ft_sort_int_tab(myarray, size);
printf("The size of my array is %d\n", size);
printf("The value of element 1 = %d\n", myarray[0]);
printf("The value of element 2 = %d\n", myarray[1]);
printf("The value of element 3 = %d\n", myarray[2]);
printf("The value of element 4 = %d\n", myarray[3]);
printf("The value of element 5 = %d\n", myarray[4]);
printf("The value of element 6 = %d\n", myarray[5]);
printf("The value of element 7 = %d\n", myarray[6]);
printf("The value of element 8 = %d\n", myarray[7]);
printf("The value of element 9 = %d\n", myarray[8]);
printf("The value of element 10 = %d\n", myarray[9]);

return 0;
}
