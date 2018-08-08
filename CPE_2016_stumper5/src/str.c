/*
** str.c for minicut in /home/Spiki/Colles/CPE_2016_stumper5/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Thu May 18 12:55:40 2017 Filliat Etienne
** Last update Thu May 18 17:33:44 2017 jeremy elkaim
*/

#include <unistd.h>

char	*my_strncpy(const char *src, int i, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      i++;
      x++;
    }
  return (dest);
}

char	*my_strcpy(const char *src, char *dest)
{
  int	x;

  x = 0;
  while (src[x] != '\0')
    {
      dest[x] = src[x];
      x++;
    }
  return (dest);
}

int	my_strlen(const char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    x++;
  return (x);
}

void	my_putchar(const char c)
{
  write (1, &c, 1);
}

void	my_putstr(const int fd, const char *str)
{
  write(fd, str, my_strlen(str));
}
