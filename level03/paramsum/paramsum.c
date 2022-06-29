#include <unistd.h>

void ft_putnbr(int n)
{
	char c;
	if(n>9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	if(!argv[0])
		return (0);
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}

/*
** kcc paramsum/paramsum.c && ./a.out 6 12 24 | cat -e && rm -rf a.out
** 3$
** kcc paramsum/paramsum.c && ./a.out | cat -e && rm -rf a.out
** 0$
** kcc paramsum/paramsum.c && ./a.out 6 12 24 2 5 7 | cat -e && rm -rf a.out
** 6$
** kcc paramsum/paramsum.c && ./a.out 6 12 24 2 5 7 25 | cat -e && rm -rf a.out
** 7$
*/
