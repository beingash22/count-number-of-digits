#include <stdio.h>

void main ()
{

  int num, count=0;
  scanf ("%d", &num);
  
  while (num>0)
  {
    count++;
    num=num/10;
  }
    
  printf ("%d", count);
}

