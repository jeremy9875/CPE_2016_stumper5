/*
** parser.c for parser in /home/jeremy.elkaim/CPE_2016_stumper5/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu May 18 14:39:58 2017 jeremy elkaim
** Last update Thu May 18 15:54:32 2017 Filliat Etienne
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	fields(char **av, int *i, t_flags *flags)
{
  flags->c_flag = 1;
  if (av[*i + 1] != NULL)
    {
      flags->c_arg = my_strdup(av[*i + 1]);
      i++;
    }
  else
    {
      my_putstr(2, "No complementary parameters\n");
      return (84);
    }
  return (0);
}

int	characters(char **av, int *i, t_flags *flags)
{
  flags->c_flag = 1;
  if (av[*i + 1] != NULL)
    {
      flags->c_arg = my_strdup(av[*i + 1]);
      i++;
    }
  else
    {
      my_putstr(2, "No complementary parameters\n");
      return (84);
    }
  return (0);
}

int	delimiter(char **av, int *i, t_flags *flags)
{
  int		x;
  
  flags->d_flag = 1;
  if (av[*i + 1] != NULL)
    {
      if ((x = my_strlen(av[*i + 1]) != 1))
	{
	  my_putstr(2, "option riquires an argument -- 'd'\n");
	  return (84);
	}
      else
	flags->d_char = av[*i + 1][0];
      i++;
    }
  else
    {
      my_putstr(2, "No complementary parameters\n");
      return (84);
    }
  return (0);
}

int		verif_flags(t_flags *flag)
{
  if (flag->d_flag == 1 && ((flag->f_flag == 0 && flag->c_flag == 0) ||
			    (flag->f_flag == 0 && flag->c_flag == 1)))
    {
      my_putstr(2, "Not operating on fields\n");
      return (84);
    }
  return (0);
}

int		my_check(char **av, int ac)
{
  int		i;
  t_flags	flags;

  i = 1;
  while (i < ac)
    {
      if (my_strcmp(av[i], CHARACTERS) == 0 || my_strcmp(av[i], C) == 0)
	{
	  if (characters(av, &i, &flags) == 84)
	    return (84);
	}
      else if (my_strcmp(av[i], DELIMITER) == 0 || my_strcmp(av[i], D) == 0)
	{
	  if (delimiter(av, &i, &flags) == 84)
	    return (84);
	}
      else if (my_strcmp(av[i], FIELDS) == 0 || my_strcmp(av[i], F) == 0)
	{
	  if (fields(av, &i, &flags) == 84)
	    return (84);
	}
      i++;
    }
  return (verif_flags(&flags));
}
