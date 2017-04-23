/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 11:01:53 by etranchi          #+#    #+#             */
/*   Updated: 2017/04/22 22:56:57 by Etienne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fill.h"

int init_map(t_piece **tab, int size, int nb_tetri)
{
	t_map *map;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	int i;

	i = 0;
	if(!(map = (t_map *)malloc(sizeof(t_map))))
=======
	if (!(map = (t_map *)malloc(sizeof(t_map))))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	if (!(map = (t_map *)malloc(sizeof(t_map))))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	if (!(map = (t_map *)malloc(sizeof(t_map))))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	if (!(map = (t_map *)malloc(sizeof(t_map))))
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		return (0);
	while (tab[i])
		i++;
	map->nb_tetri = i;
	map->tab_piece = tab;
	map->size_tab = size;
	map->nb_tetri = nb_tetri;
	if(!(map->map = (char **)malloc(sizeof(char*) * (map->size_tab + 1))))
		return (0);
	map->map[map->size_tab] = NULL;
	while (size-- > 0)
	{
		if(!(map->map[size] = (char *)malloc(sizeof(char) * (map->size_tab + 1))))
			return (0);
		map->map[size][map->size_tab] = '\0';
	}
	draw_empty_map(map);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	if(!(try_put_piece(map, 0, 0, 0)))
		return (0);
	return (1);
}

void	ft_scale_map(t_map *map)
{
	int i;

	i = map->size_tab;
	while (i--)
	{
		if (map->map[i][map->size_tab - 1] != '.')
			return ;
		if (map->map[map->size_tab - 1][i] != '.')
			return ;
	}
	map->size_tab--;
	ft_scale_map(map);
}

void check_all_piece_put(t_map *map)
=======
	try_put_piece(map, 0, 0, 0);
	return (1);
}

void ft_free_map(t_map *map)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	try_put_piece(map, 0, 0, 0);
	return (1);
}

void ft_free_map(t_map *map)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	try_put_piece(map, 0, 0, 0);
	return (1);
}

void ft_free_map(t_map *map)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
	try_put_piece(map, 0, 0, 0);
	return (1);
}

void ft_free_map(t_map *map)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
{
	int i;
	int j;

	j = map->size_tab;
	while (j-- > 0)
	{
		free(map->tab_piece[i]->init);
		free(map->tab_piece[i]->first);
		free(map->tab_piece[i]->second);
		free(map->tab_piece[i]->third);
		free(map->tab_piece[i]);
		free(map->map[i]);
	}
	free(map->map);
	free(map->tab_piece);
	free(map);

}

int check_all_piece_put(t_map *map)
{
	int i;
	t_piece **tmp_tab;
	int tmp_size;
	int tmp_tetri;
	i = 0;
	while (map->tab_piece[i])
	{
		if (map->tab_piece[i]->putted == 0)
		{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
			i = 0;
			while (map->tab_piece[i])
			{
				map->tab_piece[i]->putted = 0;
				i++;
			}
			init_map(map->tab_piece, map->size_tab + 1);
		}
		i++;
	}
	ft_scale_map(map);
	ft_print_map(map);
	exit(-1);
=======
		
			tmp_tab = map->tab_piece;
			tmp_size = map->size_tab + 1;
			tmp_tetri = map->nb_tetri;
			//ft_free_map(map);
			init_map(tmp_tab, tmp_size, tmp_tetri);
		}
	
		i++;
	}
	return (0);
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		
			tmp_tab = map->tab_piece;
			tmp_size = map->size_tab + 1;
			tmp_tetri = map->nb_tetri;
			//ft_free_map(map);
			init_map(tmp_tab, tmp_size, tmp_tetri);
		}
	
		i++;
	}
	return (0);
<<<<<<< HEAD
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
		
			tmp_tab = map->tab_piece;
			tmp_size = map->size_tab + 1;
			tmp_tetri = map->nb_tetri;
			//ft_free_map(map);
			init_map(tmp_tab, tmp_size, tmp_tetri);
		}
	
		i++;
	}
	return (0);
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
}

int try_put_piece(t_map *map, int x, int y, int nb_piece)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

	while(map->tab_piece[nb_piece] && map->tab_piece[nb_piece]->putted == 1)
			nb_piece++;

	if(y == map->size_tab || nb_piece == map->nb_tetri)
=======
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	
	if( x == map->size_tab)
	{
		x = 0;
		y++;
	}
	if(y == map->size_tab)
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	{

		check_all_piece_put(map);
		return (1);
	}
	if (map->map[y][x] != '.')
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

		try_put_piece(map, (x + 1) % map->size_tab, y +((x + 1) / map->size_tab), nb_piece);

	}
	if (map->map[y][x] == '.')
	{
			if(map->tab_piece[nb_piece] && map->tab_piece[nb_piece]->putted == 0)
			{
				int bcl = -1;
				while (!(ft_may_pose(map, map->tab_piece[++bcl], x, y)))
				if (bcl < map->nb_tetri)
					nb_piece = bcl;
				if(ft_may_pose(map, map->tab_piece[nb_piece], x, y))
				{
					draw_piece(map->map, map->tab_piece[nb_piece], x , y);
					map->tab_piece[nb_piece]->putted = 1;
					ft_print_map(map);
					try_put_piece(map, 0, 0, 0);
					exit(-1);
				}
				else
				{
					try_put_piece(map, (x + 1) % map->size_tab, y + ((x + 1) / map->size_tab), nb_piece);
					exit(-1);
				}
			}
			else
			{
				printf("coucou\n");
				try_put_piece(map, x, y, nb_piece + 1);
				exit(-1);
			}
	}
	exit(-1);
	/*while (map->tab_piece[nb_piece])
=======
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		
		try_put_piece(map, (x + 1) % 5, y + (x + 1) / 5, nb_piece);
	}
	while (map->tab_piece[nb_piece] && nb_piece < map->nb_tetri)
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	{
		if(ft_may_pose(map, map->tab_piece[nb_piece], x, y))
		{
			draw_piece(map->map, map->tab_piece[nb_piece], x , y);
			map->tab_piece[nb_piece]->putted = 1;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
			try_put_piece(map, x, y, nb_piece + 1);
		}
		else
		{
			x = ((x + 1) % (map->size_tab - 1) == 0) ? 0 : x;
			y += (x == 0) ? 1 : 0;
			try_put_piece(map, x + 1, y , nb_piece);
		}
	}*/
=======
			nb_piece++;
			try_put_piece(map, 0,0, nb_piece);
			if (nb_piece == map->nb_tetri)
			{
				ft_print_map(map);
				exit(1);
			}
		}
		else
		{
=======
			nb_piece++;
			try_put_piece(map, 0,0, nb_piece);
			if (nb_piece == map->nb_tetri)
			{
				ft_print_map(map);
				exit(1);
			}
		}
		else
		{
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
			nb_piece++;
			try_put_piece(map, 0,0, nb_piece);
			if (nb_piece == map->nb_tetri)
			{
				ft_print_map(map);
				exit(1);
			}
		}
		else
		{
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
			nb_piece++;
			try_put_piece(map, 0,0, nb_piece);
			if (nb_piece == map->nb_tetri)
			{
				ft_print_map(map);
				exit(1);
			}
		}
		else
		{
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
			try_put_piece(map, (x + 1) % 5, y + (x + 1) / 5, nb_piece);
		}
	}
	return (0);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
}

void ft_print_map(t_map *map)
{
	int i;
	i = 0;
	int j;

	printf("sizze : %i\n", map->size_tab);
	while (map->map[i] && i < map->size_tab)
	{
		j = -1;
		while (map->map[i][++j] && j < map->size_tab)
			write(1, &map->map[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}

void draw_empty_map(t_map *map)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (map->map[i] != NULL)
	{
		ft_memset(map->map[i], '.',map->size_tab);
		j = 0;
		i++;
	}
}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
int check_value_tuple(t_map *map, int x ,int y, t_tuple *tuple)
{
	if (y + tuple->y >= map->size_tab || x + tuple->x >= map->size_tab)
		return (1);
	if (map->map[y + tuple->y][x + tuple->x] == '.')
	{
=======
int check_value_tuple(int map_size, int tuple, int length)
{
	if (tuple >= 0 && tuple  < map_size)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
int check_value_tuple(int map_size, int tuple, int length)
{
	if (tuple >= 0 && tuple  < map_size)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
int check_value_tuple(int map_size, int tuple, int length)
{
	if (tuple >= 0 && tuple  < map_size)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
int check_value_tuple(int map_size, int tuple, int length)
{
	if (tuple >= 0 && tuple  < map_size)
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		return (0);
	}
	else
		return (1);
}

int ft_may_pose(t_map *map, t_piece *piece, int x, int y)
{
	int map_size;
	char **mapi;

	map_size = map->size_tab;
	mapi = map->map;
	if(mapi[y][x] == '.')
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		if (!(check_value_tuple(map, x , y ,piece->first))) 
			if (!(check_value_tuple(map, x, y, piece->second))) 
				if (!(check_value_tuple(map, x, y, piece->third)))
								if(mapi[y + piece->first->y][x + piece->first->x] == '.')
								{					
									if(mapi[y + piece->second->y][x + piece->second->x] == '.')
									{
								
										if(mapi[y + piece->third->y][x + ABS(piece->third->x)] == '.')
										{
											draw_piece(mapi, piece, x, y);
											return (1);	
										}
									}
								}
=======
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
=======
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
		if (!(check_value_tuple(map_size, y + piece->first->y, y)) && !(check_value_tuple(map_size,x + piece->first->x, x)))
			if(mapi[y + piece->first->y][x + piece->first->x] == '.')
			{
				if (!(check_value_tuple(map_size, y + piece->second->y, y)) && !(check_value_tuple(map_size,x + piece->second->x, x)))
				{
					if(mapi[y + piece->second->y][x + piece->second->x] == '.')
					{
						if (!(check_value_tuple(map_size,y + piece->third->y, y)) && !(check_value_tuple(map_size,x + piece->third->x, x)))
							if(mapi[y + piece->third->y][x + piece->third->x] == '.')
							{
								draw_piece(mapi, piece, x, y);
								return (1);	
							}
					}
				}
			}
>>>>>>> f83c39c3ae22eca6e0d39aa00006e402ad025ef8
	}
	return (0);
}

void draw_piece(char **map, t_piece *piece, int x, int y)
{
	map[y][x] = piece->letter;
	map[y + piece->first->y][x + piece->first->x] = piece->letter;
	map[y + piece->second->y][x + piece->second->x] = piece->letter;
	map[y + piece->third->y][x + piece->third->x] = piece->letter;

}
