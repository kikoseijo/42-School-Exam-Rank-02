#include <unistd.h>

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

void ft_expand(char *str)
{
  int i = 0;
  int flag = 0;

  while(ft_space(str[i]))
    i++;
  while(str[i])
  {
      if(ft_space(str[i]))
        flag = 1;
      if(!ft_space(str[i]))
      {
        if(flag)
          write(1, "   ", 3);
        flag = 0;
        write(1, &str[i], 1);
      }
    i++;
  }
}

int main(int argc, char **argv)
{
  if(argc == 2)
    ft_expand(argv[1]);
  write(1, "\n", 1);
  return (0);
}
