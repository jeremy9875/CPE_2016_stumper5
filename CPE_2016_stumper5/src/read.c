/*
** main.c for minicut in /home/Spiki/Colles/CPE_2016_stumper5/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Thu May 18 12:17:25 2017 Filliat Etienne
** Last update Thu May 18 16:16:19 2017 jeremy elkaim
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char		*my_memset(char *mal, const char c, int size)
{
  int		x;

  x = 0;
  while (x < size)
    {
      mal[x] = c;
      x++;
    }
  mal[size] = '\0';
  return (mal);
}

void		*x_malloc(int size)
{
  char		*buff;

  if ((buff = malloc(size + 2)) == NULL)
    {
      my_putstr(2, ERR_MALL_F);
      return (NULL);
    }
  return ((void *) my_memset(buff, '\0', size + 1));
}

int		verif_buff(char *buff)
{
  int		x;

  x = 0;
  while (buff[x] != '\0')
    {
      if ((buff[x] > 13 && buff[x] < 32))
	{
	  my_putstr(2, ERR_BUFFER);
	  return (84);
	}
      x++;
    }
  return (0);
}

char		*check_stack(char *buff, char *stack)
{
  int		i;
  char		*new_stack;
  
  if ((i = verif_buff(buff)) == 84)
    return (NULL);
  if ((new_stack = x_malloc(sizeof(char) *
			  (my_strlen(buff) + my_strlen(stack)))) == NULL)
    return (NULL);
  if (stack != NULL)
    {
      new_stack = my_strcpy(stack, new_stack);
      free (stack);
    }
  i = my_strlen(new_stack);
  new_stack = my_strncpy(buff, i, new_stack);
  return (new_stack);
}

char		*read_it()
{
  char		*stack;
  char		*buff;

  if ((stack = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  while (read(0, buff, 10) != 0)
    {
      if ((stack = check_stack(buff, stack)) == NULL)
	return (NULL);
      free(buff);
      if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
	return (NULL);
    }
  free(buff);
  return (stack);
}
