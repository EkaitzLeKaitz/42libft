/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagnzal <sagonzal@student.42madrid>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:55:18 by sagnzal           #+#    #+#             */
/*   Updated: 2024/03/05 11:48:37 by sagnzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ifndef => Verifica que el archivo no este  definido "nombre archivo en 
mayusculas y _ en vez de ."

define => Define "nombre de archivo en mayusculas y _ en vez de ."

LIBFT_H => Nombre libreria.(_H define que es un archivo de encabezado)

Se añaden las librerias que necesiten las funciones:
 - <stdlibft.h> => Libreria del malloc y del free.
 - <unistd.h> => Libreria del write.

typedef => Es una palabra clave de C que se utiliza para crear un alias de un
tipo de dato existente. En este caso, se está creando un alias para la
estructura struct s_list bajo el nombre t_list.

struct s_list => Define una estructura llamada s_list, que tiene dos miembros:

 - void *content => Un puntero genérico que puede apuntar a cualquier tipo de
 dato. Este miembro generalmente contendrá el dato almacenado en un nodo de la
 lista.
 - struct s_list *next => Un puntero que apunta al siguiente nodo en la lista.
 Este puntero se utiliza para enlazar los nodos consecutivos de la lista.

t_list => Es el alias que se está creando para la estructura struct s_list.

endif => Termina la definición.
*/
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_lstsize(t_list *lst);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstlastadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_size	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
