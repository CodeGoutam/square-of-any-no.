#include<conio.h>
#include<stdio.h>
int square();
main()
{ int a;

a=  square();
printf("Square of any no. is:-%d",a);


 
}

int square()

{
   
int b,c;
printf("give the no.:- ");
scanf("%d",&b);
c=b*b;
return (c);


}