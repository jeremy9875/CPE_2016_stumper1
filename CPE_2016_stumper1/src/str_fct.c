/*
** str_fct.c for tail in /home/Spiki/Colles/CPE_2016_stumper1/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Thu Apr 20 13:34:59 2017 Filliat Etienne
** Last update Thu Apr 20 17:59:36 2017 jeremy elkaim
*/
#include <stdlib.h>
#include <unistd.h>

int	is_num(char *str)
{
  int	x;

  while (str[x] != '\0')
    {
      if (str[x] < '0' || str[x] > '9')
	return (1);
      x++;
    }
  return (0);
}


int	my_strlen(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    x++;
  return (x);
}

void	my_putstr(int fd, char *str)
{
  write(fd, str, my_strlen(str));
}

int	my_atoi(char *str)
{
  int	nb;
  int	x;

  nb = 0;
  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] >= '0' && str[x] <= '9')
	{
	  nb *= 10;
	  nb += str[x] - 48;
	}
      else
	return (nb);
      x++;
    }
  return (nb);
}
