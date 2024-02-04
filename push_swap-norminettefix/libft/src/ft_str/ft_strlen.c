/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:59:52 by rode-lim          #+#    #+#             */
/*   Updated: 2024/02/04 20:59:53 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s++)
		;
	return (s - start - 1);
}
