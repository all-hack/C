/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:11:24 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 21:36:31 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int total;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	total = 0;
	while (total < nb)
	{
		if (i < 46340)
		{
			i++;
			total = i * i;
			if (total == nb)
				return (i);
		}
	}
	return (0);
}
