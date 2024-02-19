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
# NAME = libft.a
# Se crea a partir de archivos objeto, con lo cual hay que especificarlos.
# 
# 2º SOURCES => Son los archivos fuente, aqui los nombramos.
# 
# SOURCES = ft_isalnum.c ft_blabla.c ......................................... \
# ft_fsergfas.c (Se usa la barra inversa para comunicar que sigues escribiendo lo mismo cambiando de linea)  
# 
# 3º OBJECTS => Igualamos los .c a los .o para definirlos.
#
# $() => LLama a un elemento.
# OBJECT = $(SOURCES:.c=.o)
#
# 4º CC = cc 
#
# 5º CFLAGS = -Wall -Wextra -Werror
#
# 6º all: $(NAME)
# Marca el objetivo principal del makefile (Ejecuta el Makefile y crea el programa. Crar el nakefile xD)
#
# $(NAME): $(OBJECTS)
# 		ar 
