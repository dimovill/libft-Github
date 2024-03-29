#include <stddef.h>
#include <stdio.h>


void	ft_bzero(void *s, size_t n)
{
	char	*cadena;
	size_t	d;

	cadena = s;
	d = 0;
	while (d < n)
	{
		cadena[d] = '\0';
		d++;
	}
}

size_t	ft_strlen(char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int main()
{
    char str[50] = "This is a string";
    
    printf("Before: %s\n", str);
    
    ft_bzero(str, ft_strlen(str));
    
    printf("After: %s\n", str);
    
    return 0;
}
