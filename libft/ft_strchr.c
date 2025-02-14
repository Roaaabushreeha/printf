/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:29:31 by rabu-shr          #+#    #+#             */
/*   Updated: 2024/09/08 10:58:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char   *strchr(const char *s, int c);
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*se;

	i = 0;
	se = (char *)s;
	while (1)
	{
		if (se[i] == (char)c)
			return (se + i);
		if (se[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[];

// 	s[] = "roaa";
// 	printf("%s \n", ft_strchr(s, 'a'));
// 	printf("%s", strchr(s, 'a'));
// }
