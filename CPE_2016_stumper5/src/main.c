/*
** main.c for main in /home/jeremy.elkaim/CPE_2016_stumper5/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu May 18 14:20:14 2017 jeremy elkaim
** Last update Thu May 18 15:59:23 2017 Filliat Etienne
*/

#include "my.h"
#include <unistd.h>

int	main(int ac, char **av)
{
  char	*input;

  if (ac == 1)
    {
      my_putstr(2, av[0]);
      my_putstr(2, ERR_INPUT1);
      my_putstr(2, ERR_INPUT2);
      return (84);
    }
  else
    {
      if (my_check(av, ac) == 84)
	return (84);
      if ((input = read_it()) == NULL)
	return (84);
      my_putstr(1, input);
    }
  return (0);
}
