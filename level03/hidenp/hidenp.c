#include <unistd.h>

void ft_hidenp(const char *s1,const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s2[j])
	{
		if(s1[i] == s2[j])
			i++;
		j++;
	}
	if(s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char const **argv) {
	if(argc == 3)
		ft_hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}


/*
** kcc hidenp/hidenp.c && ./a.out "hola" "helllojsajsjsjsjslsdfsafa" | cat -e && rm -rf a.out
** kcc hidenp/hidenp.c && ./a.out "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e && rm -rf a.out
** kcc hidenp/hidenp.c && ./a.out "abc" "btarc" | cat -e && rm -rf a.out
** kcc hidenp/hidenp.c && ./a.out "abc" "2altrb53c.sse" | cat -e && rm -rf a.out
*/
