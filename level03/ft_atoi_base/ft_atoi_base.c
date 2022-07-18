#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f');
}

int get_base(char c)
{
	if(c >= '0' && c <= '9')
		return c - '0';
	else if (c >= 'a' && c <= 'z')
		return c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		return c - 'A' + 10;
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int res;
	int sign;
	int current;

	i = 0;
	res = 0;
	sign = 1;
	while(is_space(str[i]))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	current = get_base(str[i]);
	while(current >= 0 && current < str_base)
	{
		res = res * str_base + current;
		i++;
		current = get_base(str[i]);
	}
	return (res * sign);
}

#include <stdio.h>

int main(void) {

	int res = ft_atoi_base("C0", 16);
	printf("%d\n", res);
	res = ft_atoi_base("11000000", 2);
	printf("%d\n", res);
	return 0;
}
