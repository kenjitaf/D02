#include<unistd.h>


void ft_putchar(char c);

int main()
{

  int i=0,j;

  while(i<=98)
    {
      j=i+1;
      while(j<=99)
	{
	  ft_putchar((i / 10)+48);
	  ft_putchar((i % 10)+48);
	  ft_putchar(" ");
	  ft_putchar((j / 10)+48);
	  ft_putchar((j % 10)+48);

	  j++
	}
      i++
    }


  return(0);
}


  
