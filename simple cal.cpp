#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,m,n,o,p,q,r,s,z;
	float l;
	printf("choose an option below \n");
printf ("enter 0) for addition \n enter 1) for subtraction \n enter 2) multiplication \n enter 3) for division\n");
scanf("%d",&z);
if (z==0)
{
printf("enter a number");
scanf("%d" ,&a);
printf("enter another number");
scanf("%d",&b);
c = a+b;
printf("the sum of a and b is %d" ,c);
}
else if (z==1)
{
	printf("enter a number");
	scanf("%d",&d);
	printf("enter another number");
	scanf("%d",&e);
	f=d-e;
	printf("the difference of given two numbers is %d",f);
}
else if (z==2)
{
	printf("enter a number");
	scanf("%d",&g);
	printf("enter another number");
	scanf("%d",&h);
	i = g*h;
	printf("the product of 2 numbers is %d",i);

}
else if (z==3)
{
	printf("enter a number");
	scanf("%d",&j);
	printf("enter another number");
	scanf("%d",&k);
	l = j/k;
	printf("the divident of 2 numbers are %f"  ,l);	
}
else 
{
	printf("the given number is an invalid please try again");
}
return 0;
}
