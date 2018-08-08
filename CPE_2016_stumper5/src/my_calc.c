/*
** my_calc.c for my_calc in /home/jeremy.elkaim/CPE_2016_stumper5/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu May 18 15:16:15 2017 jeremy elkaim
** Last update Thu May 18 17:29:28 2017 jeremy elkaim
*/

#include "my.h"

int	my_atoi(char *str)
{
  int	value;

  value = 0;
  while(*str)
    {
      if (*str >= '0' && *str <= '9')
	{
	  value *= 10;
	  value += *str - 48;
	}
      else
	return (value);
      str++;
    }
  return (value);
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + 48);
    }
  if (nb < 10)
    my_putchar(nb % 10 + 48);
  return (nb);
}
