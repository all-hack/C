/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 10:56:45 by csummers          #+#    #+#             */
/*   Updated: 2016/08/30 10:56:45 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_map(void)
{
	int		i;
	int		j;
	int		size;
	char	*output;

	size = g_map_dims[0] * (g_map_dims[1] + 1);
	i = 0;
	output = (char*)malloc(sizeof(char) * (size + 1));
	while (i < g_map_dims[0])
	{
		j = 0;
		while (j < g_map_dims[1])
		{
			output[(i * (g_map_dims[1] + 1)) + j] = g_map[i][j].lett;
			j++;
		}
		output[i * (g_map_dims[1] + 1) + g_map_dims[1]] = '\n';
		i++;
	}
	output[size] = '\0';
	write(1, output, size);
	free(output);
}
