# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: averkenn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/11 06:31:45 by averkenn          #+#    #+#              #
#    Updated: 2014/11/22 18:05:26 by averkenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memalloc.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strcat.c\
	ft_strchr.c\
	ft_strclr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdup.c\
	ft_strequ.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strnew.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_isspace.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

LIB = libft.a

all : ran

ran : $(LIB)
	ranlib $(LIB)

$(LIB) : $(OBJ)
	ar rc $(LIB) $(OBJ)

clean : 
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(LIB)

re : fclean all

