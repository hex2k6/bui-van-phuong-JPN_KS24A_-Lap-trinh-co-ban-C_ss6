#include <stdio.h>
int main()
{
	int a, sum, b;
	for (int i=1;i<=5;i++)
	{
		printf ("moi ban nhap gia tri %d:",i);
		scanf ("%d",&a);
		if (a%2!=0)
		{
			b=a;
			sum=sum+b;
		 } 
	}
	printf ("tong các so le :%d",sum); 
	return 0;
}
