/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:59:58 by rode-lim          #+#    #+#             */
/*   Updated: 2024/02/04 20:59:59 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buffsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen < buffsize - 1 && buffsize > 0)
		ft_strlcpy(&dst[dstlen], src, buffsize - dstlen);
	if (dstlen >= buffsize)
		dstlen = buffsize;
	return (dstlen + srclen);
}
