/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:50:47 by lposse            #+#    #+#             */
/*   Updated: 2024/12/19 15:55:58 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
