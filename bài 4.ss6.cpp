#include <stdio.h>
#include <math.h> 
int main()
{
	float a, b, c, x, delta, x1, x2; 
	printf ("moi nhap gia tri a :");
	scanf ("%f" , &a);
	printf ("moi nhap gia tri b :");
	scanf ("%f" , &b);
	printf ("moi nhap gia tri c :");
	scanf ("%f" , &c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0){
			printf ("phuong trinh vô so nghiem");
		    } else {
		    	printf ("phuong trinh vo nghiem"); 
			} 
		} else {
			x = -c / b;
			printf ("phuong trinh co nghiem là %.2f", x); 
		}
	} else {
		delta =(b*b) -(4*a*c);
		if (delta < 0) {
			printf ("vo nghiem");
		}
		if (delta==0) {
			x= -b / 2*a; 
		}
		if (delta > 0) {
		   x1= (-b + sqrt(delta)) / 2*a;
		   x2= (-b - sqrt(delta)) / 2*a;
		   printf ("nghiem cua phuong trinh x1= %.2f\n", x1);
		   printf ("nghiem cua phuong trinh x2= %.2f\n", x2);	
		} 
	} 
return 0;	
}
