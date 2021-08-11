#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int count,n=100,c,b;
  


 while(n>0)
    {
		 c=n;
		while(c>0)
		{ 
			b=c%10;
	      if(b==9)
	         {
			     count++;
			     
			 }
		 c=c/10;
		}
		n--;
    }
     printf("%d",count);

    return 0;
}
