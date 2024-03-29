/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:26:32 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:07:12 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
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

int main()
{
    char str[] = "This is a string";
    
    printf("Before: %s\n", str);
    
    ft_bzero(str, 5);
    
    printf("After: %s\n", str);
    
    return 0;
}
