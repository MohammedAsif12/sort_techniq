#include <stdio.h>
#include <stdlib.h>
#include <time.h> // usage: clock_t, clock(), CLOCKS_PER_SEC

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
int option, n = 6, i;
double time_spent = 0.0;
clock_t clock();

//Prompt to enter the Value of n and Read
//printf("Enter the value of n: \n");
//scanf("%d", &n);

//Now,Declare an array
int a[n];
int b[6] = {1, 2, 3, 5, 8, 9};

//Prompt to Enter the Values
printf("Enter the 6 Elements: \n");

//Read the Elements
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Prompt for Option
printf("Enter the Option:\n1.Bubble_sort\n2.Insertion_Sort\n3.Selection_Sort\n4.Quick_sort\n5.Merge_Sort\nEnter:  ");
scanf("%d", &option);

//Switch
switch (option)
{

//Bubble_Sort
case 1:

//Call Bubble Sort
Bubble(a, n);

//Compare Arrays
for (i = 0; i < n; i++)
{
if (a[i] != b[i])
{
printf("\nFAILURE\n");
}
}
printf("\nSUCCESS: Expected Output Matches\n");
break;

//Insertion_Sort
case 2:

//Call Insertion Sort
Insertion(a, n);

//Compare Arrays
for (i = 0; i < n; i++)
{
if (a[i] != b[i])
{
printf("\nFAILURE\n");
}
}
printf("\nSUCCESS: Expected Output Matches\n");
break;


//Selection_Sort
case 3:

//Call selection sort
Selection(a, n);

//Compare Arrays
for (i = 0; i < n; i++)
{
if (a[i] != b[i])
{
printf("\nFAILURE\n");
}
}
printf("\nSUCCESS: Expected Output Matches\n");
break;


//Quick_Sort
case 4:

//call quick_sort
quick_sort(a, 0, n - 1);

//End Time
clock_t end = clock();

//Calculation of Total Time 
time_spent = time_spent + ((double)end / CLOCKS_PER_SEC);
printf("\nTotal Time Taken for Quick Sort is %f\n", time_spent);

//Compare Arrays
for (i = 0; i < n; i++)
{
if (a[i] != b[i])
{
printf("\nFAILURE\n");
}
}

//Call Print Function
print_quick(a, n);

printf("\nSUCCESS: Expected Output Matches\n");
break;



//Merge_Sort
case 5:
merge_sort(a, 0, n - 1);

//End Time
clock_t end1 = clock();

//Calculation of Total Time 
time_spent = time_spent + ((double)end1 / CLOCKS_PER_SEC);
printf("\nTotal Time Taken for Quick Sort is %f\n", time_spent);

//Compare Arrays
for (i = 0; i < n; i++)
{
if (a[i] != b[i])
{
printf("\nFAILURE\n");
}
}

//Call Print Function
print_merge(a, n);

printf("\nSUCCESS: Expected Output Matches\n");
break;
}
}
