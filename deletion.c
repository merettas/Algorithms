#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,p,item;
clrscr();
printf("Enter the limit of array");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The elements before deletion- ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nEnter the position of the  element to be deleted");
scanf("%d",&p);
item=a[p-1];
for(i=p;i<n;i++)
a[i-1]=a[i];
n--;
printf("The array after deletion of element %d-",item);
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}