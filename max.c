#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],s=0,n,i,m;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
if(s<0)
{
m=0;
}
else
{
m=s;
}
printf("%d",m);
getch();
}
