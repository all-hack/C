/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 23:11:30 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:11:50 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_rush_condition2(int x, int y, int x_ind, int y_ind)
{
	if (x_ind == 0 && y_ind == 0)
		return ('A');
	else if (x_ind == 0 && y_ind == y - 1)
		return ('C');
	else if (x_ind > 0 && x_ind < x - 1 && y_ind < y - 1 && y_ind > 0)
		return (' ');
	else if (x_ind == x - 1 && y_ind == 0)
		return ('A');
	else if (x_ind == x - 1 && y_ind == y - 1)
		return ('C');
	else
		return ('B');
}

char	*char_rush02(int x, int y, int x_i, int y_i)
{
	char	*output;
	int		j;

	j = 0;
	if (x > 0 && y > 0)
	{
		output = (char*)malloc(sizeof(char) * (x * y + y));
		while (y_i < y)
		{
			while (x_i < x)
			{
				output[j] = ft_rush_condition2(x, y, x_i, y_i);
				x_i++;
				j++;
			}
			if (!(x <= 0 || y <= 0))
				output[j] = '\n';
			x_i = 0;
			y_i++;
			j++;
		}
		output[x * y + y] = '\0';
		return (output);
	}
	return (0);
}
