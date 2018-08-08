/*
** str_2.c for minicut in /home/Spiki/Colles/CPE_2016_stumper5/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Thu May 18 15:05:41 2017 Filliat Etienne
** Last update Thu May 18 15:40:06 2017 Filliat Etienne
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char		*my_strdup(char *src)
{
  int		i;
  char		*str;

  i = 0;
  if ((str = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return (NULL);
  while (src[i] != '\0')
    {
      str[i] = src[i];
      i++;
    }
  str[i] = '\0';
  return (str);
}

int	my_strcmp(char *str, char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
        return (1);
      else
        i = i + 1;
    }
  return (0);
}
