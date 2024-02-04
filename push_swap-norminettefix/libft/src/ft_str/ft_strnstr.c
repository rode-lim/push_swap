/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:59:37 by rode-lim          #+#    #+#             */
/*   Updated: 2024/02/04 20:59:38 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0) 
		return ((char *) big);
	while (*big != '\0' && n-- >= little_len) 
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0) 
			return ((char *)big);
		big++;
	}
	return (NULL); 
}
