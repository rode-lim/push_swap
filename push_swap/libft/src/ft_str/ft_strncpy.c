/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:59:40 by rode-lim          #+#    #+#             */
/*   Updated: 2024/02/04 20:59:41 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t ft_strncpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    const char *src_ptr;
    char *dst_ptr;
	size_t p;

    srcsize = 0;
	src_ptr = src;
	dst_ptr = dst;
    while (*src_ptr != '\0')
    {
        srcsize++;
        src_ptr++;
    }
    if (dstsize == 0 || dst == NULL)
        return (srcsize);
    p = 0;
    while (p < (dstsize - 1) && *src != '\0')
    {
        *dst_ptr = *src;
        dst_ptr++;
        src++;
        p++;
    }
    *dst_ptr = '\0';
    return (srcsize);
}
