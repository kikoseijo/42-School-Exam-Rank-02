#include "list.h"

void swap_vals(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *cur;
	t_list *out;
	t_list *temp;


	out = lst;
	temp = lst;
	while(out)
	{
		cur = out;
		while(cur && cur->next)
		{
			if(cmp(cur->data, cur->next->data) == 0)
			{
				swap_vals(&cur->data, &cur->next->data);
				cur = temp;
			}
			else
					cur = cur->next;
		}
		out = out->next;
	}
	return (lst);
}

// kcc sort_list/sort_list.c && ./a.out && rm -rf a.out


/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int ascending(int a, int b)
** {
** 	return (a <= b);
** }
**
** int	main(void)
** {
** 	t_list *c = malloc(sizeof(t_list));
** 	c->next = 0;
** 	c->data = 45;
**
** 	t_list *b = malloc(sizeof(t_list));
** 	b->next = c;
** 	b->data = 73;
**
** 	t_list *a = malloc(sizeof(t_list));
** 	a->next = b;
** 	a->data = 108;
**
** 	t_list *cur = a;
** 	while (cur)
** 	{
** 		printf("%d, ", cur->data);
** 		cur = cur->next;
** 	}
** 	printf("\n");
**
** 	cur = sort_list(a, ascending);
**
** 	// cur = a;
** 	while (cur)
** 	{
** 		printf("%d, ", cur->data);
** 		cur = cur->next;
** 	}
** 	printf("\n");
** }
*/
