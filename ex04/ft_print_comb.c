#include<unistd.h>


void ft_putchar(char c)
{
  write(1,&c,1);
}


void ft_print_comb(void)
{

  int nb[3];

  nb[0]='0';


  while (nb[0] <='9')
    {
      
      
      nb[1]=nb[0]+1;
      while(nb[1] <='9')
	{
	   
	  
	  nb[2]=nb[1]+1;
	  while(nb[2] <='9')
	    {
	      if(!(nb[0] == nb[1] && nb[0] == nb[2]))
		ft_putchar(nb[0]);
	        ft_putchar(nb[1]);
		ft_putchar(nb[2]);
		ft_putchar(',');
		ft_putchar(' ');
		nb[2]++;
	    }
	  nb[1]++;
	}
      nb[0]++;
    }
}

int main (void)
{
  ft_print_comb();
  return(0);
}
