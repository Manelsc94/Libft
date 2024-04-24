/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:16:57 by mde-agui          #+#    #+#             */
/*   Updated: 2024/04/10 19:16:57 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*byte;
	char	ch;

	ch = (char)c;
	byte = (char *)str;
	if (n > 0)
	{
		*byte = ch;
		if (n > 1)
			ft_memcpy(byte + 1, byte, n - 1);
	}
	return (str);
}

/*
int main(void)
{
	char buffer[20];

	ft_memset(buffer, 'X', 10);
	printf("Buffer after memset: %s\n", buffer);
	return (0);
}*/