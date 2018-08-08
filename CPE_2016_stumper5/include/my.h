/*
** my.h for my in /home/jeremy.elkaim/CPE_2016_stumper5/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu May 18 14:21:17 2017 jeremy elkaim
** Last update Thu May 18 17:44:56 2017 jeremy elkaim
*/

#ifndef MY_H_
# define MY_H_

# include "struct.h"

# define ERR_MALL_F	"Malloc failed\n"
# define ERR_BUFFER	"Invalid caracteres in file\n"
# define ERR_INPUT1     ": you must specify a list of"
# define ERR_INPUT2     "bytes, characters, or fields\n"
# define CHARACTERS	"--characters"
# define DELIMITER	"--delimiter"
# define FIELDS		"--fields"
# define C		"-c"
# define D		"-d"
# define F		"-f"

int	my_atoi(char *str);
int	my_display_f(char *av, int nb);
int	my_display_c(char *av, int nb);
int	my_display_b(char *av,char b, int nb);
int	my_putnbr(int nb);
void	my_putchar(char c);
void	my_putstr(int fd, char *str);
int	my_strlen(char *str);
int	my_check(char **av, int ac);
int	fields(char **av, int *i, t_flags *flags);
int	caracters(char **av, int *i, t_flags *flags);
char	*read_it();
int	delimiter(char **av, int *i, t_flags *flags);
int	my_strcmp(char *str, char *cmp);
char	*my_strncpy(char *srrc, int i, char *dest);
char	*my_strcpy(char *src, char *dest);
char	*my_strdup(char *src);

#endif /* MY_H_ */
