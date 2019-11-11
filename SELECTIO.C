#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp,loc,min;
clrscr();
printf("\n how many elements:\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<=n-1;i++)
{
min=a[i];
loc=i;
for(j=i+1;j<=n-1;j++)
{
if(a[j]<min)
{
min=a[j];
loc=j;
}
}
if(loc!=1)
{
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
}
printf("the no. after selection sorting are:\n");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
getch();
}