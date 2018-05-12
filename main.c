/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 22:56:41 by sding             #+#    #+#             */
/*   Updated: 2018/05/12 11:23:25 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int 	i;

	i = 1;
	if (argc >= 2)
	{
		line = NULL;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			while (get_next_line(fd, &line) > 0)
			{
				printf("%s\n", line);
				free(line);
				line = NULL;
			}
			i++;
		}
		close(fd);
	}
	return (0);
}
