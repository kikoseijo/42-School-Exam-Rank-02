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

void ft_str_capitalizer(char *str)
{
	int i;
	int flag;
	char c;

	i = 0;
	flag = 0;
	while(str[i])
	{
		c = str[i];
		if(is_space(str[i]))
			flag = 1;
		if(!is_space(str[i]))
		{
			if(flag || i == 0)
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

// kcc str_capitalizer/str_capitalizer.c && ./a.out "a FiRSt LiTTlE TESt" | cat -e && rm -rf a.out
// kcc str_capitalizer/str_capitalizer.c && ./a.out "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e && rm -rf a.out
