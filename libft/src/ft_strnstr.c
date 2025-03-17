/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:58:58 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/23 12:41:39 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0' || str == to_find)
		return ((char *)str);
	while (i < n && str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && (i + j) < n && str[i + j])
			j ++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i ++;
	}
	return (NULL);
}
