#include<stdio.h>
#include<conio.h>
     int main()
{	int l,w,p;
	clrscr();
	printf("Enter length and width:");
	scanf("%d %d",&l,&w);
	p=2*l+2*w;
	printf("perimeter of rectangle is %d \n",p);
	getch();
	return 0;
}