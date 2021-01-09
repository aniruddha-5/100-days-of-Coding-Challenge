/* 
Author : ANIRUDDHA ROUTH
roll no: 19101104034
Day:07-12-2020
Day 7:
Problem 1:
Write a program in C to perform the following operation of single Dynamic Linked list :
1.	Creation 
2.	Display 
3.	Display using recursive function
4.	Searching
5.	Insertion 
6.	Deletion
7.	Reverse print 
8.	Reverse the linked list

*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
 	struct node *link;
}nd;

nd *start = NULL;

nd *search(int x)
{
	nd *ptr;
	ptr=start;
	while((ptr) && (ptr->data != x))
	ptr=ptr->link;
	return(ptr);	
}

void create_ll()
{
int x,d;
do
{
printf("Enter the data: ");
scanf("%d",&d);
nd *ptr = (nd*)malloc(sizeof(nd));
ptr->data = d;
if(start==NULL)
{
ptr->link = NULL;
start = ptr;
}
else
{
ptr->link = start;
start = ptr;

}
printf("Add more values? 1-Yes\n");
scanf("%d",&x);
} while(x==1);
}


void display()
{
	nd *ptr;
	ptr=start;
	printf("\nStart");
	while(ptr)
	{
		printf("->%d",ptr->data);
		ptr=ptr->link;
	}
}

void display_recur(nd *ptr)
{
	if(ptr)
	{
		printf("->%d",ptr->data);
		ptr=ptr->link;
		display_recur(ptr);
	}
}

void s()
{
	nd *t;
	int x;
	printf("Enter the number you want to search\n");
	scanf("%d",&x);
	t=search(x);
	if(t)
	{
		printf("Success\n");
	}
	else
	{
		printf("Not found\n");
	}
}

void insert()
{
	int x;
	printf("Enter the number after which you want to insert\n");
	scanf("%d",&x);
	nd *temp;
	temp=search(x);
	if(temp)
	{
		nd *ptr;
		ptr=(nd *)malloc(sizeof(nd));
		printf("\nEnter data\n");
		scanf("%d",&ptr->data);
		ptr->link=temp->link;
		temp->link=ptr;
	}
	else
	{
		printf("\nInvalid position...try again\n");
	}
}

void del()
{
	int x,f=0;
	printf("Enter the number you want to delete\n");
	scanf("%d",&x);
	nd *temp=start;
	nd *prev=start;
	while(temp != NULL)
	{
		if(temp->data==x)
		{
			if(temp != start)
			{
				prev->link=temp->link;
			}
			else
			{
				start=temp->link;
			}
			f=1;
			free(temp);
			break;
		}
		prev=temp;
		temp=temp->link;
	}
	if(f)
	{
		printf("\nValue deleted successfully\n");
	}
	else
	{
		printf("\nInvalid value\n");
	}
}

void display_rev(nd *ptr)
{
	if(ptr->link!=NULL)
	display_rev(ptr->link);
	printf("%d ",ptr->data);
}

void reverse()
{
	nd *cur = start;
	nd *prev = NULL;
	nd *next = NULL;
	while(cur!=NULL)
	{
		next = cur->link;
		cur->link = prev;
		prev = cur;
		cur = next;
	}
 	start = prev;
}

int main()
{
	int c;
	z:
	system("@cls||clear");
	printf("1. Create a linked list\n");
	printf("2. Display the list\n");
	printf("3. Display using recursive function\n");
	printf("4. Search for a value\n");
	printf("5. Insert a value in the list\n");
	printf("6. Delete a particular element\n");
	printf("7. Print in reverse order\n");
	printf("8. Reverse the list\n");
	printf("9. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &c);
	printf("\n");
	switch(c)
	{
		case 1: create_ll();
				reverse();
				break;
		case 2: display();
				break;
		case 3: display_recur(start);
				break;
		case 4: s();
				break;
		case 5: insert();
				break;
		case 6: del();
				break;
		case 7: display_rev(start);
				break;
		case 8: reverse();
				printf("Successfully reversed\n");
				break;
		case 9: exit(1);
				break;
		default: printf("Wrong Choice");
	}
	getch();
	goto z;
	return 0;
}

