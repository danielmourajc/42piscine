#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
    char var[] = "Muito bem... Passou no teste, rsrs.";
    char *ptr;
    
    ptr = &var[0];
    
    ft_putstr(var);
    
    return 0;
}
