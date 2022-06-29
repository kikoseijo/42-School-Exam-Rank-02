#include <unistd.h>

void ft_putnbr(int i)
{
	char c;
	if(i>9)
		ft_putnbr(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int ft_atoi(char *s)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while(s[i])
	{
		res *= 10;
		res += s[i] - '0';
		i++;
	}
	return (res);
}

void ft_tab_mult(int n)
{
	int i;
	char c;
	char nbr;

	i = 1;
	nbr = n + '0';
	while(i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_tab_mult(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}

/*
** kcc tab_mult/tab_mult.c && ./a.out 9 && rm -rf a.out
** kcc tab_mult/tab_mult.c && ./a.out 19 && rm -rf a.out
** kcc tab_mult/tab_mult.c && ./a.out | cat -e && rm -rf a.out
*/
