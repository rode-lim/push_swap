/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:00:45 by rode-lim          #+#    #+#             */
/*   Updated: 2024/02/04 21:00:46 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_int(va_list ap)
{
	long long	n;
	int			neg;

	n = va_arg(ap, int);
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg++;
		write(1, "-", 1);
	}
	return (ft_putnbr_base(n, "0123456789") + neg);
}
