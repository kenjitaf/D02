
#include <unistd.h>


void ft_putchar (char c)
{
  write(1,&c,1);
}


int main(void)
{
  ft_print_numbers();
  return (0);
}
  

void ft_print_numbers(void)
{
  char i;
  i='0';
  for(i='0'; i<='9';i++)
    {
      ft_putchar(i);
    }

}
