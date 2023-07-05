#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b;
  clrscr();
  printf("Enter Multiplatication Table Number = ");
  scanf("%d",&b);
  for(a=1;a<=10;a++)
    {
     printf(" %d x %d = %d\n",b,a,b*a);
    }



  getch();
}