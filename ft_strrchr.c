/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 19:30:25 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/10 12:38:45 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	ptr += ft_strlen(s);
	while (ptr != s)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
