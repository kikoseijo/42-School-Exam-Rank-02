#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i;

	i = 2;
	while(i < n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_fprime(int n)
{
	int i;
	int first;

	i = 2;
	first = 1;
	if (n == 1)
		printf("1");
	while(i <= n)
	{
		if(n % i == 0 && is_prime(i))
		{
			if(first)
				printf("%d", i);
			else
				printf("*%d", i);
			first = 0;
			n /= i;
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}

// kcc fprime/fprime.c && ./a.out | cat -e && rm -rf a.out
