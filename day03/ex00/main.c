/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:51:02 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:51:03 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr(int nb);

void	ft_ft(int *nbr);

int		main(void)
{
	int nb;
	int *ptr;

	ptr = &nb;
	ft_ft(ptr);
	ft_putnbr(nb);
	return (0);
}
