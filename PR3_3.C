#include<stdio.h>
#include<conio.h>

void main()
{
  int p,count=0;
  clrscr();
  printf("Enter a Value = ");
  scanf("%d",&p);
  while(p>0)
  {
   p=p/10;
   count++;
  }
  printf("Total Count Digit = %d",count);


  getch();
}