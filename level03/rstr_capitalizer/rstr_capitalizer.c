#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

char ft_tolower(char c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char ft_toupper(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int ft_len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}

void ft_str_capitalizer(char *str)
{
	int i;
	int flag;
	int len;
	char c;

	i = 0;
	len = ft_len(str) - 1;
	flag = 0;
	while(str[i])
	{
		while(is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		c = str[i];
		if((!is_space(str[i - 1]) && is_space(str[i + 1])) || str[i + 1] == '\0')
			flag = 1;
		if(!is_space(str[i]))
		{
			if(flag || i == len)
				c = ft_toupper(str[i]);
			else
				c = ft_tolower(str[i]);
			flag = 0;
		}
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int i;

	i=1;
	while(i < argc)
	{
		ft_str_capitalizer(argv[i]);
		i++;
	}
	if(argc < 2)
		write(1, "\n", 1);
	return (0);
}

// kcc rstr_capitalizer/rstr_capitalizer.c && ./a.out "a FiRSt LiTTlE TESt" | cat -e && rm -rf a.out
// kcc rstr_capitalizer/rstr_capitalizer.c && ./a.out "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e && rm -rf a.out
