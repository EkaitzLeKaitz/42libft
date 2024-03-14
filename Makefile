# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 14:24:48 by sagnzal           #+#    #+#              #
#    Updated: 2024/02/02 15:00:48 by sagnzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Reglas =>
# {
# Objetivo : Arcivhos que se van a complilar/ejecutar/trabajar.
# tab tab comandos/instrucciones que se van a ejecutar sobre los archivos.
# }
# Tipos de archivo:
# 	Fuente (.c) => Archivos legibles por el ser humano.
# 	Objeto (.o) => Archivos legibles por la maquina. (Son los archivos .c 
# 	compilados pero no enlazados. Son temporales).
#
# 1º NAME => Nombre del programa que voy a crear.
# 
NAME = libft.a
# Se crea a partir de archivos objeto, con lo cual hay que especificarlos.
# 
# 2º SOURCES => Son los archivos fuente, aqui los nombramos.
 
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c ft_memcmp.c \
	  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	  ft_calloc.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_strlen.c ft_strlcpy.c \
	  ft_strlcat.c

SOURCES_B = ft_lstnew_bonus.c

#(Se usa la barra inversa para comunicar que sigues escribiendo lo mismo cambiando de linea)  
# 
# 3º OBJECTS => Igualamos los .c a los .o para definirlos.
#
# $() => LLama a un elemento.

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_B = $(SOURCES_B:.c=.o)

# 4º CC = cc 
#
# 5º CFLAGS = -Wall -Wextra -Werror
#
# 6º all: $(NAME)

all: $(NAME)

# Marca el objetivo principal del makefile (Ejecuta el Makefile y crea el programa. Crar el nakefile xD)

$(NAME): $(OBJECTS)
		ar $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all
