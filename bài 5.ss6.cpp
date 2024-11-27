#include <stdio.h>
int main()
{
 int a, b, c;
 printf ("moi ban nhap nãm:");
 scanf ("%d",&a);
 if (a>=0)
  {
  printf ("moi ban nhap thang");
  scanf ("%d",&b);
  if (b>0 && b<13)
  {
   switch (b)
  {
    case 1: 
    printf ("thang 1 co 31 ngay");
    break;
    case 2:
    if (a%4==0 && a%100!=0) {
     printf ("thang 2 co 29 ngay");
     break;
    }else {
     printf ("thang 2 co 28 ngay");
     break;
    }
    case 3:
       printf ("thang 3 co 31 ngay");
       break;
    case 4:
       printf ("thang 4 co 30 ngay");
       break;
    case 5:
       printf ("thang 5 co 31 ngay");
       break;
    case 6:
       printf ("thang 6 co 30 ngay");
       break;
    case 7:
       printf ("thang 7 co 31 ngay");
       break;
    case 8:
       printf ("thang 8 co 31 ngay");
       break;
    case 9:
       printf ("thang 9 co 30 ngay");
       break;
       case 10:
      printf ("thang 10 co 31 ngay");
      break;
    case 11:
      printf ("thang 11 co 30 ngay");
      break;
    case 12:
      printf ("thang 10 co 31 ngay");
      break;
    default:
	printf ("khong phu hop");                      
 }
  }else {
 	printf ("khong phu hop");
  } 
 }else {
 	printf ("khong phu hop");
 } 
 return 0;
}
