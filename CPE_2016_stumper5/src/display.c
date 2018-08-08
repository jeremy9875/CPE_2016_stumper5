/*
** display.c for display in /home/jeremy.elkaim/CPE_2016_stumper5/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu May 18 15:28:13 2017 jeremy elkaim
** Last update Thu May 18 17:25:48 2017 jeremy elkaim
*/

#include "my.h"

int	my_display_f(char *av, int nb)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    {
      if (av[i] == '\t')
	  i = i + 1;
      else
	{
	  my_putchar(av[i]);
	  i = i + 1;
	}
    }
  return (0);
}

int	my_display_c(char *av, int nb)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    {
      if (av[i] == '\n')
	i = i + 1;
      else if (i == nb)//*nb
	{
	  my_putchar(av[i]);
	  i = i + 1;
	}
      nb++;
    }
  return (0);
}

int	my_display_b(char *av, char b, int nb)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    {
      if (av[i] == b)
	  i = i + 1;
      else
	{
	  my_putchar(av[i]);
	  i = i + 1;
	}
    }
  return (0);
}
