/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_piece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 11:13:24 by etranchi          #+#    #+#             */
/*   Updated: 2017/04/22 11:13:40 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

t_piece *malloc_piece(void)
{
	t_piece *piece;

	if(!(piece = (t_piece *)malloc(sizeof(t_piece))))
		return (NULL);
	if(!(piece->init = (t_tuple *)malloc(sizeof(t_tuple))))
		return (NULL);
	set_zero_tuple(piece->init);
	if(!(piece->first = (t_tuple *)malloc(sizeof(t_tuple))))
		return (NULL);
	set_zero_tuple(piece->first);
	if(!(piece->second = (t_tuple *)malloc(sizeof(t_tuple))))
		return (NULL);
	set_zero_tuple(piece->second);
	if(!(piece->third = (t_tuple *)malloc(sizeof(t_tuple))))
		return (NULL);
	set_zero_tuple(piece->third);
	return (piece);
}

void	set_zero_tuple(t_tuple *tuple)
{
	tuple->x = 0;
	tuple->y = 0;
}



t_piece *create_piece(char *str, int nb_tetri)
{
	t_piece *piece;
	int i;
	int nb;

	i = 0;
	nb = 0;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	if (!(piece = malloc_piece()))
		return (NULL);
	piece->letter = 'A' + nb_tetri;
=======
	alpha = ft_strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (!(piece = malloc_piece()))
		return (NULL);
=======
	alpha = ft_strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (!(piece = malloc_piece()))
		return (NULL);
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	alpha = ft_strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (!(piece = malloc_piece()))
		return (NULL);
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	alpha = ft_strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	if (!(piece = malloc_piece()))
		return (NULL);
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		printf("je suis malloc %i\n", nb_tetri);
	piece->letter = alpha[nb_tetri];
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	piece->putted = 0;
	while (i < 21)
	{
			if (str[i] == '#')
			{
				if (!(ft_set_tuple(piece, nb, i)))
						return (NULL);
				nb++;
			}
		i++;
	}
	set_zero_tuple(piece->init);
	return (piece);
}


int ft_set_tuple(t_piece *piece, int nb, int i)
{
	
	if (piece == NULL)
		return (0);

	if (nb == 0)
	{
		piece->init->x = (i % 5);
		piece->init->y = (i / 5);
		printf("%i::%i->%i\n",piece->init->x, piece->init->y,i);
	}
	if (nb == 1)
	{
		piece->first->x = (i % 5) - piece->init->x;
		piece->first->y = (i / 5) - piece->init->y;
	}
	if (nb == 2)
	{
		piece->second->x = (i % 5) - piece->init->x;
		piece->second->y = (i / 5) - piece->init->y;
	}
	if (nb == 3)
	{
		printf("iiiii:%d\n", i);
		piece->third->x = (i % 5) - piece->init->x;
		piece->third->y = (i / 5) - piece->init->y;
	}
	return (1);
}

int add_piece_tab(t_piece **tab, t_piece *piece)
{
	int i;

	if(piece == NULL)
		return (1);
	i = piece->letter - 'A';
	tab[i] = piece;
	return (0);
}
