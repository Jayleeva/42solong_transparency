/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:21:42 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/23 12:35:34 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_;
	const char	*src_;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ = dest;
	src_ = src;
	i = 0;
	while (i < n)
	{
		dest_[i] = src_[i];
		i ++;
	}
	return (dest);
}
