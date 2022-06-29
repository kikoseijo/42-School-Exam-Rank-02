
unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int i;

	if(a == 0 || b == 0)
		return (0);
	i = 1;
	while(i)
	{
		if(i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}

/*
** #include <stdio.h>
**
** int main(void)
** {
** 	int res =	lcm(45, 66);
** 	printf("res:%d", res);
** 	write(1, "\n", 1);
** 	return (0);
** }
*/


// kcc lcm/lcm.c && ./a.out && rm -rf a.out
