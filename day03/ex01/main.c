/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:50:45 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:50:47 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr(int nb);

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int nb;
	int *********ptr8;
	int ********ptr7;
	int *******ptr6;
	int ******ptr5;
	int *****ptr4;
	int ****ptr3;
	int ***ptr2;
	int **ptr1;
	int *ptr;

	ptr = &nb;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	ft_putnbr(nb);
	return (0);
}
