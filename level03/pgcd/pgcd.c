#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_pgcd(int a, int b)
{
	int i;

	if(a < 0 || b < 0)
		printf("0");
	if (a > b)
		i = a;
	else
		i = b;
	while(i > 0)
	{
		if(a % i == 0 && b % i == 0)
		{
			printf("%d",i);
			return;
		}
		i--;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		ft_pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}

/*
** kcc pgcd/pgcd.c && ./a.out | cat -e && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 20 30  && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 42 10 && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 42 12 && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 14 77 && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 14 77 | cat -e && rm -rf a.out
** kcc pgcd/pgcd.c && ./a.out 17 3 | cat -e && rm -rf a.out
*/
