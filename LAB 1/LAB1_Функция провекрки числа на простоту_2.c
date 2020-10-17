#include <stdio.h>

int is_simple(int number);

int main()
{
  int inp_num;
  scanf ("%d", &inp_num );
  printf("%d", is_simple(inp_num) );
  getchar(); 
  getchar();

  return 0;
}

int is_simple(int number) 
{
  if (number > 1)
  {
    for(int i = 2; i < number; i++)
    {
      if (number % i == 0)
      {
        return 0;
      }
      
      return 1;
    }
  }
  else
  {
    printf("the number you entered is neither composite nor simple. \n");
  }
  
  return 0;
}
