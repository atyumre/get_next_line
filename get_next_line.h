/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyumre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:04:01 by atyumre           #+#    #+#             */
/*   Updated: 2018/06/21 13:27:58 by atyumre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 320

int					get_next_line(const int fd, char **line);
void				ft_gnl_overlow(char **full, char *del, char **line);
void				ft_gnl_alloc(char *buf, char **full);
int					ft_last_line(char **full, char **line);

#endif
