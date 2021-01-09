/* 
Author : ANIRUDDHA ROUTH
roll no: 19101104034
Day:01-11-2020
Day 6:
Problem 1:
Write a program in C to perform the following operations in Array data structure:
1.	Creation 
2.	Display
3.	Selection Sort
4.	Bubble Sort
5.	Modified Bubble Sort
6.	Insertion Sort
7.	Merge Sort
8.    Quick Sort
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5000

int a[SIZE], b[SIZE], n;



void display()
{
int i;
for(i=0; i<n; i++)
{
printf("%d ", a[i]);
}
}

void create()
{
int i;
printf("Enter size of the array \n");
scanf("%d",&n);
printf("Enter the %d numbers\n", n);
for(i=0; i<n; i++)
{
	scanf("%d", &a[i]);
	b[i] = a[i];
}
printf("Data stored ");
}


void bubble_sort()
{
int i, j;
for(i=0; i<n-1; i++)
{
	for(j=0; j<n-i-1; j++)
	{
			if(a[j]>a[j+1])
			{
				a[j] = a[j]^a[j+1];
				a[j+1] = a[j]^a[j+1];
				a[j] = a[j]^a[j+1];
			}
	}
}
printf("Successfully sorted\n");
}

void modified_bubble()
{
int i, j, flag;
for(i=0; i<n-1; i++)
{
flag = 0;
for(j=0; j<n-i-1; j++)
{
if(a[j]>a[j+1])
{
a[j] = a[j]^a[j+1];
a[j+1] = a[j]^a[j+1];
a[j] = a[j]^a[j+1];
flag = 1;
}
}
if(!flag)
break;
}
printf("Successfully sorted\n");
}

void selection_sort()
{
int pos, min, i, j;
for(i=0; i<n-1; i++)
{
pos = i;
min = a[i];
for(j=i+1; j<n; j++)
{
if(a[j]<min)
{
min = a[j];
pos = j;
}
}

if(pos!=i)
{
a[pos] = a[pos]^a[i];
a[i] = a[pos]^a[i];
a[pos] = a[pos]^a[i];
}
}
printf("Successfully sorted\n");
}

void insertion_sort()
{
int i, j, key;
for (i=1; i<n; i++)
{
key = a[i];
j = i-1;
while (j>=0 && a[j]>key)
{
a[j+1] = a[j];
j--;
}
a[j+1] = key;
}
printf("Successfully sorted\n");
}

void merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
int L[n1], R[n2];
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];
i = 0;
j = 0;

k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}
while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}
while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}

void mergeSort(int arr[], int l, int r)
{
if (l<r)
{
int m = (l+r)/2;
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}

int main()
{
int ch;
x:
printf("1. Create an array\n");
printf("2. Display the array\n");
printf("3. Selection sort operation\n");
printf("4. Bubble sort operation\n");
printf("5. Modified bubble sort operation\n");
printf("6. Insertion sort operation\n");
printf("7. Merge sort operation\n");
printf("8. Quick sort\n");
printf("9. Exit\n");
printf("Enter your choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1: create();
break;
case 2: display();
break;
case 4: bubble_sort();
break;
case 5: modified_bubble();
break;
case 3: selection_sort();
break;
case 6: insertion_sort();
break;
case 7: mergeSort(a,0,n-1);
		printf("Successfully sorted\n");
break;
case 8: 
break;
case 9: exit(1);
break;
default: printf("Wrong Choice");
}
getch();

goto x;
return 0;
}

