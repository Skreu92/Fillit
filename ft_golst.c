/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_golst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelanoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:07:50 by hdelanoe          #+#    #+#             */
/*   Updated: 2017/04/22 11:13:31 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "fill.h"

int check_mate(char *str, int i, int countx, int county)
{
	int placebox;

	placebox = 0;
	if (str[i + 1] == '#' && countx != 3)
		placebox++;
    if (str[i + 5] == '#'  && county < 3)
	   placebox++;
	if (str[i - 1] == '#' && countx > 0)
		placebox++;
	if (str[i - 5] == '#' && county > 0)
		placebox++;
	return (placebox);
}

int check_error(int countbox, int placebox)
{
	if (countbox != 4)
	{
		write(2, "bad count of #.\n", 17);
		return (0);
	}
    if (placebox != 6 && placebox != 8)
    {
        write (2, "bad placement of #.\n", 21);
        return (0);
    }
    return (1);
}

int	ft_golst(char *str)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	t_piece **tab;
	if (!(check_str(str)))
		return (0);
	if (!(tab = init_tab(str)))
		return (0);
	if(!(init_map(tab, 2)))
=======
	int nb_tetri;
	t_piece **tab;

	if (!(nb_tetri = check_str(str)))
		return (0);
	if (!(tab = init_tab(str, nb_tetri)))
		return (0);
	printf("kj\n");
	if(!(init_map(tab, nb_tetri, nb_tetri)))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	int nb_tetri;
	t_piece **tab;

	if (!(nb_tetri = check_str(str)))
		return (0);
	if (!(tab = init_tab(str, nb_tetri)))
		return (0);
	printf("kj\n");
	if(!(init_map(tab, nb_tetri, nb_tetri)))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	int nb_tetri;
	t_piece **tab;

	if (!(nb_tetri = check_str(str)))
		return (0);
	if (!(tab = init_tab(str, nb_tetri)))
		return (0);
	printf("kj\n");
	if(!(init_map(tab, nb_tetri, nb_tetri)))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	int nb_tetri;
	t_piece **tab;

	if (!(nb_tetri = check_str(str)))
		return (0);
	if (!(tab = init_tab(str, nb_tetri)))
		return (0);
	printf("kj\n");
	if(!(init_map(tab, nb_tetri, nb_tetri)))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		return (0);
	return (1);
}

int check_str(char *str)
{
	size_t	i;
	int 	county;
	int		countx;
	int		countbox;
	int 	placebox;

	i = 0;
	while (str[i] != '\0')
	{
		county = 0;
		countbox = 0;
        placebox = 0;

		while (county != 4)
		{
			countx = 0;
			while (str[i] != '\n')
			{
				if (str[i] == '#')
				{
					placebox += check_mate(str, i, countx, county);					
					countbox++;
				}
				i++;
				countx++;
			}
			if (countx != 4)
			{
				return (0);
			}
			i++;
			county++;
		}
		if (!(check_error(countbox, placebox)))
			return (0);
		i++;
	}
	printf(" i  : %lu\n", i / 21);
	return (i / 21);
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
t_piece **init_tab(char *str)
=======
t_piece **init_tab(char *str, int nb)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
t_piece **init_tab(char *str, int nb)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
t_piece **init_tab(char *str, int nb)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
t_piece **init_tab(char *str, int nb)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
{
	size_t j;
	int count_tetri;
	size_t i;
	t_piece **tab;

	i = 0;
	if(!(tab = (t_piece **)malloc(sizeof(t_piece *) * (nb + 1))))
		return (0);
	tab[nb] = 0;
	while (str[i])
		i++;

	if(!(tab = (t_piece **)malloc(sizeof(t_piece *) * ((i / 20) + 1))))
		return (0);
	j = 0;
	count_tetri = 0;
	while (str[j] != '\0' && i > j)
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		if(add_piece_tab(tab,create_piece(&str[j], count_tetri)))
=======
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		printf("%s\n",&str[j]);
		if(!(add_piece_tab(tab,create_piece(&str[j], count_tetri))))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		{
			write(2,"erreur au malloc", 16);
			return (0);
		}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
		j += 21;
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
		j += 21;
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
		j += 21;
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
		j += 21;
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		count_tetri++;
		j += 21;
	}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
	printf("ok\n");
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	printf("ok\n");
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	printf("ok\n");
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	printf("ok\n");
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	return (tab);
}