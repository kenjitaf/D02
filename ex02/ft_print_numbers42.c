#include <unistd.h>


void ft_putchar(char c);




void ft_print_numbers42(void)
{
  char number;
  number='0';
  while (number <='9')
    {
      ft_putchar(number);
      number ++;
    }
}

/*int main (void)
{
  ft_print_numbers42();
  return(0);
}/*
