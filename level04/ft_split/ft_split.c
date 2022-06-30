#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char *ft_strdup(char *str)
{
	int i;
	int len;
	char *res;

	i = 0;
	len = 0;
	while(str[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while(i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char **ft_split_words(char *str, int len, int count)
{
	int i;
	int w;
	char **res;

	res = (char **)malloc(sizeof(char*) * (count + 1));
	if(!res)
		return (0);
	// res[count] = "\0";
	i = 0;
	w = 0;
	if(str[i] != '\0')
		res[w++] = ft_strdup(&str[i]);
	i++;
	while(i < len)
	{
		if(str[i] != '\0' && str[i - 1] == '\0')
			res[w++] = ft_strdup(&str[i]);
		i++;
	}
	return (res);
}

char    **ft_split(char *s)
{
	int count;
	int i;
	char *str;

	i = 0;
	count = 0;
	str = ft_strdup(s);
	while(str[i])
	{
		if(is_space(str[i]))
			str[i] = '\0';
		else if(str[i - 1] == '\0' || i == 0)
			count++;
		i++;
	}
	return (ft_split_words(str, i, count));
}

/*
** #include <stdio.h>
**
**
** int main(void) {
** 	char **res = ft_split("Hola que pasa");
** 	int i = 0;
** 	int j;
**
** 	while(res[i])
** 		i++;
** 	j = i;
** 	while(j >= 0)
** 	{
** 		if(res[j])
** 				printf("%s", res[j]);
** 		j--;
** 	}
**
** 	return 0;
** }
**
** // kcc ft_split/ft_split.c && ./a.out | cat -e && rm -rf a.out
*/
