#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int tmp;

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// kcc sort_int_tab/sort_int_tab.c && ./a.out && rm -rf a.out

/*
** #include <stdio.h>
**
** void print_tab(int *tab, int len)
** {
** 	int i;
**
** 	i = 0;
** 	while(i < len)
** 	{
** 		if(i == 0)
** 			printf("%d", tab[i]);
** 		else
** 			printf(", %d", tab[i]);
** 		i++;
** 	}
** 	printf("\n");
** }
**
** int main(void) {
** 	int tab[5] = {30, 40, 1, 4, 2};
** 	print_tab(tab, 5);
** 	sort_int_tab(tab, 5);
** 	print_tab(tab, 5);
** 	return 0;
** }
*/
