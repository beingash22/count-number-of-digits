#include <stdio.h>

void main ()
{

  int num, count=0;
  scanf ("%d", &num);

  if (num>0)
  {
    while (num>0)
    {
      count++;
      num=num/10;
    }
    
    printf ("%d", count);
  }
  else
    printf ("invalid input");
}
