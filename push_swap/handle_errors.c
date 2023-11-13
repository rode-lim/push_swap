/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:20:58 by rode-lim          #+#    #+#             */
/*   Updated: 2023/10/30 17:20:58 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || ft_isdigit(*str_n)))
		return (1);
	if ((*str_n == '+' 
			|| *str_n == '-')
		&& !(str_n[1] >= '0' && *str_n[1] <= '9'))
		return (1);
	while (*str_n++)
	{
		if (!ft_isdigit(*str_n))
			return (1);
	}
	return (0);	
}

int	error_duplicate(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->n == tmp->n)
				return (1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->nbr = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack_node **a)
{
	free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}