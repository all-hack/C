/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:12:03 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 22:28:35 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_list_last(t_list *begin_list);
t_list				*ft_create_elem(void *data);
void				ft_print_list(t_list *node);
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_putstr(char *str);
#endif
