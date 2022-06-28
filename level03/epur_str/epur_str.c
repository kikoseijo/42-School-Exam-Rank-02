#include <unistd.h>

int ft_isspace(char c)
{
  if(c == ' ' || c == '\t')
    return (1);
  return (0);
}

void ft_epur_str(char *str)
{
  int i=0;
  int flag = 0;

  while(ft_isspace(str[i]))
    i++;
  while(str[i])
  {
    if(ft_isspace(str[i]))
      flag = 1;
    if(!ft_isspace(str[i]))
    {
      if(flag)
      {
        write(1, " ", 1);
        flag = 0;
      }
      write(1, &str[i], 1);
    }
    i++;
  }
}

int main(int argc, char **argv)
{
  if(argc == 2)
    ft_epur_str(argv[1]);
  write(1, "\n", 1);
  return (0);
}

// SOLUTION 2
// int		main(int argc, char const *argv[])
// {
// 	int		i;
// 	int		flg;
//
// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i += 1;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] == ' ' || argv[1][i] == '\t')
// 				flg = 1;
// 			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
// 			{
// 				if (flg)
// 					write(1, " ", 1);
// 				flg = 0;
// 				write(1, &argv[1][i], 1);
// 			}
// 			i += 1;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
