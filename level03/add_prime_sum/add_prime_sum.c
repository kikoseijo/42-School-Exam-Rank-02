#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
  int i;
  int res;

  i = 0;
  res = 0;
  while(str[i] >= '0' && str[i] <= '9')
  {
      res *= 10;
      res += str[i] - '0';
      i++;
  }
  return (res);
}

int ft_isprime(int n)
{
  int i = 2;
  while(i < n)
  {
    if(n%i==0)
      return (0);
    i++;
  }
  return (1);
}

void ft_putnbr(int nbr)
{
  char n;
  if(nbr>9)
    ft_putnbr(nbr/10);
  n = (nbr%10)+'0';
  write(1, &n, 1);
}

void ft_prime_sum(int nb)
{
  int res = 0;

  int i = 2;
  while (i <= nb)
  {
    if(ft_isprime(i))
      res += i;
    i++;
  }
  ft_putnbr(res);
  write(1,"\n", 1);
}

int main(int argc, char **argv)
{
  int n;

  n = ft_atoi(argv[1]);
  if(argc == 2)
    ft_prime_sum(n);
  else
    write(1,"0\n", 2);
  return (0);
}
