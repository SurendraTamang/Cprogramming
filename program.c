/*Write a program in c to find all possible roots of ax2+bx+c=0*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,d,real,imag,r1,r2;
printf("Enter the coefficents of x^2,x and the constant of the equation ax2+bx+c=0 \n");

scanf("%f %f %f",&a,&b,&c);
d=b*b-(4*a*c);
if (d>0){
	printf("The roots are \n");
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("r1=%f \n ",r1);
	printf("r2=%f \n ",r2);
	

}
else {
	printf("The roots are imaginary");
	d=sqrt(fabs(d));
	real=-b/2*a;
	imag=d/2*a;
	printf("real = %f \n",real);
	printf("imaginary= %f ",imag);

}


getch();
return 0;
}
