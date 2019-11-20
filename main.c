#include <stdio.h>
#include <stdlib.h>

//Prototypes
extern void Bubble(int a[], int n);
extern void Insertion(int a[], int n);
extern void Selection(int a[], int n);
extern void quick_sort(int *a, int first, int last);
extern void merge_sort(int *a, int first, int last);
extern void print_quick(int *a, int n);
extern void print_merge(int *a, int n);

//Main Function
int main()
{
//Declare the Variables
int option, n, i;
char choice;

//Prompt to enter the Value of n and Read
printf("Enter the value of n: \n");
scanf("%d", &n);

//Now,Declare an array
int a[n];

//Prompt to Enter the Values
printf("Enter the Elements of n: \n");

//Read the Elements
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Prompt for Option
printf("Enter the Option:\n1.Bubble_sort\n2.Insertion_Sort\n3.Selection_Sort\n4.Quick_sort\n5.Merge_Sort\nEnter: \n");
scanf("%d", &option);

//Switch
switch (option)
{
case 1:
Bubble(a, n);
break;

case 2:
Insertion(a, n);
break;

case 3:
Selection(a, n);
break;

case 4:
quick_sort(a, 0, n - 1);
print_quick(a, n);
break;

case 5:
merge_sort(a, 0, n - 1);
print_merge(a, n);
break;
}
}

