/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:04:07 by obelange          #+#    #+#             */
/*   Updated: 2016/08/26 23:26:21 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				btree_apply_infix(t_btree *node, void (*applyf)(void *));
void				btree_insert_data(t_btree **r, void *i, int (*c)\
		(void *, void *));
void				print_void(void *any);
int					ft_voidcmp(void *s1, void *s2);
int					ft_strcmp(char *s1, char *s2);
void				ft_putnbr(int x);
void				ft_putchar(char c);
void				ft_putstr(char *str);
#endif
