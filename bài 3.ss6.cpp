#include <stdio.h>
int main()
{
	int a=123, b=0, c; 
	while (a>0)
	{
		printf ("moi ban nhap mat khau:");
		scanf ("%d",&c);
		if (a==c)
		{
		  printf ("dung roi\n");
		  break; 	
		} else {
			b=b+1;
			printf ("sai roi\n "); 
		}
		if (b<=3)
		{
		  printf ("ban da nhap qua so lan va bi khoa\n");
		  break;	
		}  
	 }
	 return 0; 
 } 
