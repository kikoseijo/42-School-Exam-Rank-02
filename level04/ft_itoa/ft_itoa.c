#include <stdlib.h>

int ft_count(long nbr)
{
	int i;

	i = 1;
	if(nbr<0)
	{
		i++;
		nbr *= -1;
	}
	while(nbr > 9)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long n;
	int i;
	int len;
	char *res;

	i = 0;
	n = nbr;
	len = ft_count(nbr);
	res = (char*)malloc(sizeof(char) * (len + 1));
	res[len] = '\0';
	if(n < 0)
	{
		res[0] = '-';
		n *= -1;
		i++;
	}
	while(--len)
	{
		res[len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);

}

/*
** #include <stdio.h>
**
** int main(void) {
**
** 	int len = ft_count(-2233445);
** 	char *s = ft_itoa(-2233445);
** 	printf("d:%d\n-2233445\n%s\n", len, s);
** 	return 0;
** }
**
** // kcc ft_itoa/ft_itoa.c && ./a.out && rm -rf a.out
*/
