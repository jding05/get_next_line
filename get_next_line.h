/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sding <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:35:19 by sding             #+#    #+#             */
/*   Updated: 2018/04/20 13:35:22 by sding            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 1
# define CHECK(x, y)if(x)return(y)

int		get_next_line(const int fd, char **line);

#endif
