/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:10:36 by rode-lim          #+#    #+#             */
/*   Updated: 2023/10/30 15:10:36 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//*******We use STDBOOL for bool flags and limits to define min and max
# include <stdbool.h>
# include <limits.h>
# include "./libft_withbonus/libft.h"

//*******My structure for the stack AKA node
typedef struct s_stack_node
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack_node;

//*******Codes to handle errors
int					error_syntax(char *str_n)
int					error_duplicate(t_stack_node *a, int n);
void				free_stack(t_stack_node **stack);
void				free_errors(t_stack_node **a);

//*******Functions to initialize the stack
void				init_stack_a(t_stack_node **a, char **argv);
char				**ftt_split(char *s, char c);

//*******Functions to initialize the Node
void				init_nodes_a(t_stack_node *a, t_stack_node *b);
void				init_nodes_b(t_stack_node *a, t_stack_node *b);
void				current_index(t_stack_node *stack);
void				set_cheapest(t_stack_node *stack);
t_stack_node		get_cheapest(t_stack_node *stack);
void				prep_for_push(t_stack_node **s, t_stack_node *n, char c);

//*******Stack utilities
int					stack_len(t_stack_node *stack);
t_stack_node		*find_last(t_stack_node *stack);
bool				stack_sorted(t_stack_node *stack);
t_stack_node		*find_min(t_stack_node *stack);
t_stack_node		*find_max(t_stack_node *stack);

//*******Required Commands
void				sa(t_stack_node **a, bool print);
void				sb(t_stack_node **b, bool print);
void				ss(t_stack_node **a, t_stack_node **b, bool print);
void				pa(t_stack_node **a, t_stack_node **b, bool print);
void				pb(t_stack_node **a, t_stack_node **b, bool print);
void				ra(t_stack_node **a, bool print);
void				rb(t_stack_node **b, bool print);
void				rr(t_stack_node **a, t_stack_node **b, bool print);
void				rra(t_stack_node **a, bool print);
void				rrb(t_stack_node **b, bool print);
void				rrr(t_stack_node **a, t_stack_node **b, bool print);

//*******Required Algorithms
void				sort_three(t_stack_node **a);
void				sort_stacks(t_stack_node **a, t_stack_node **b);

#endif