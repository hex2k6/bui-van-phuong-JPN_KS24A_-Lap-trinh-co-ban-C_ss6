#include <stdio.h>
int main()
{
	int a, b=0, c=0;
	for (int i=1;i<=5;i++)
	{
		printf ("moi nhap gia tri %d:",i);
		scanf ("%d",&a);
		if (a%2==0)
		{
		   b = b+1;	
		}else {
			c = c+1; 
		} 
	}
	printf ("co %d so chan:\n",b);
	printf ("co %d so le:\n",c);
	return 0; 
 } 
