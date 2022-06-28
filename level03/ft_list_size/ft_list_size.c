#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
  int i = 0;

  while(begin_list)
  {
    i++;
    begin_list = begin_list->next;
  }
  return (i);
}

/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int	main(void)
** {
** 	int n = 0;
**
** 	t_list *c = malloc(sizeof(t_list));
** 	c->next = 0;
** 	c->data = &n;
**
** 	t_list *b = malloc(sizeof(t_list));
** 	b->next = c;
** 	b->data = &n;
**
** 	t_list *a = malloc(sizeof(t_list));
** 	a->next = b;
** 	a->data = &n;
**
** 	printf("%d\n", ft_list_size(a));
** }
*/
