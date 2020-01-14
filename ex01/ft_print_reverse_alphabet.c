#include <unistd.h>


void ft_putchar(char c)
{
  write(1,&c,1);
}


void ft_print_reverse_alphabet(void)
{
  char c;

  for(c ='z'; c >='a';c--)
  {
  ft_putchar(c);
  }  
}

int main (void)
{
  ft_print_reverse_alphabet();
}
