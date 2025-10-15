/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:40:01 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/10 13:09:49 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (*ptr)
	{
		if (*ptr == ((unsigned char)c))
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return ((char *)ptr);
	return (NULL);
}
