#include <unistd.h>

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

void ft_print_hex(int n)
{
	char base[17] = "0123456789abcdef";
	if(n > 15)
		ft_print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}


/*
** kcc print_hex/print_hex.c && ./a.out | cat -e && rm -rf a.out
** kcc print_hex/print_hex.c && ./a.out 255 | cat -e && rm -rf a.out
** kcc print_hex/print_hex.c && ./a.out "5156454" | cat -e && rm -rf a.out
*/
