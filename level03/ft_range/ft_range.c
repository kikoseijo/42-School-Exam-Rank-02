#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i;
	int len;
	int *res;

	if(start > end)
		len = start - end;
	else
		len = end - start;
	res = (int *) malloc((len + 1) * sizeof(int));
	i = 0;
	while(start != end)
	{
		res[i] = start;
		start += (start > end) ? -1 : 1;
		i++;
	}
	res[i] = start;
	return (res);
}

/*
** #include <stdio.h>
**
** int main(void)
** {
** 	int i = 0;
** 	int *res = ft_range(10, -10);
**
** 	while(i < 50)
** 	{
** 		printf("%d\n", res[i]);
** 		i++;
** 	}
** 	return (0);
** }
*/
