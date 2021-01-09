/* 
Author : ANIRUDDHA ROUTH
roll no: 19101104034
Day:01-11-2020
Day 5:
Problem 1:
Write a program in C to perform the following operations in Array data structure:
1.	Creation 
2.	Display
3.	Linear Search
4.	Binary Search
5.	Insertion Operation 
6.	Deletion by a given position
7.	Deletion by a given item

*/

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int a[MAX_SIZE];
int n;

void display()
{
int i;
printf("The array elements are:\n");
printf("%d", a[0]);
for(i=1;i<n;i++)
printf(", %d",a[i]);
}

void creation()
{
int i;
printf("Enter the number of elements you want to store: ");
scanf("%d",&n);
printf("Enter the %d elements\n", n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}


void linear_search()
{
int k,i,f=0;
printf("Enter the value to be searched: ");
scanf("%d",&k);
for(i=0; i<n; i++)
{
if(a[i]==k)
{
f = 1;
break;
}
}
if(f)
printf("Element found at position %d\n",i+1);
else
printf("Element not found\n");
}


void binary_search()
{
int l,u,mid,k,f=0;
printf("Enter the element you want to search: ");
scanf("%d",&k);
int i,j,t;
int b[MAX_SIZE];
for(i=0; i<n; i++)
b[i] = a[i];
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(b[j]>b[j+1])
{
t=b[j];
b[j]=b[j+1];
b[j+1]=t;
}
}
}

l=0;
u=n-1;
while(l<=u)
{
mid=(l+u)/2;
if(k==b[mid])
{
printf("Element is present\n");
f=1;
break;
}
else if(k<b[mid])
u=mid-1;
else
l=mid+1;
}
if(f==0)
printf("Element not present\n");
}

void insertion()
{
int i,pos,key;
n = n+1;
if(n>MAX_SIZE)
{
printf("\nOverflow");
n = n-1;
return;
}
printf("Enter the position you want to insert an element and enter the?-value\n");
scanf("%d %d",&pos,&key);
pos--;
for(i=n-1;i>=pos;i--)
a[i+1]=a[i];
a[pos]=key;
printf("Successfully inserted");
}


void delete_position()
{
int i,pos;
if(n<=0)
printf("Underflow\n");
printf("Enter the position to be deleted: ");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
a[i]=a[i+1];
printf("Successfully deleted\n");
n = n-1;
}


void delete_item()
{
if(n<=0)
{
printf("Underflow");
return;
}
int i,item,pos=-1;
printf("Enter the item to be deleted\n");
scanf("%d",&item);
for(i=0; i<n; i++)
if(a[i]==item)
{
pos = i;
break;
}
if(pos==-1)
printf("Element not present\n");
else
{
for(i=pos;i<n;i++)
a[i]=a[i+1];
n = n-1;
printf("Successfully deleted\n");
}
}


int main()
{
int x;
z:
printf("1.Create an array\n");
printf("2.Display the contents\n");
printf("3.Linear search operation\n");
printf("4.Binary search operation\n");
printf("5.Insertion operation\n");
printf("6.Delete from a given position\n");
printf("7.Delete a given item\n");
printf("8.Exit\n");
printf("Enter your choice : ");
scanf("%d",&x);
printf("\n");
switch(x)
{
case 1: creation();
break;
case 2: display();
break;
case 3: linear_search();
break;
case 4: binary_search();
break;
case 5: insertion();
break;
case 6: delete_position();
break;
case 7: delete_item();
break;
case 8: exit(1);
break;
default :printf("Wrong choice");
}
getch();
goto z;
return 0;
}

