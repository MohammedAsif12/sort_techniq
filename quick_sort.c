#include <stdio.h>

//Prototypes
void quick_sort(int *a, int first, int last);
int partition(int *a, int first, int last);
void swap(int *a, int *b);
void print(int *a, int n);

//Main Function
int main()
{
//Variable Declaration
int i, j, first, last, n;

//Prompt to Enter the Value of n and Read
printf("Enter the value of n: \n");
scanf("%d", &n);

//Now, Declare an array
int a[n];

//Prompt to Enter the Elements of n
printf("Enter the Elements of n: \n");

//Read the Elements of n
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Call Quick_sort Function
quick_sort(a, 0, n-1);

//Call Print Function
print(a, n);
}

//Quick_ sort Definition
void quick_sort(int *a, int first, int last)
{
if (first < last)
{
//Call partition function
int partition_index = partition(a, first, last);

quick_sort(a, first, partition_index - 1);
quick_sort(a, partition_index + 1, last);

}
}
//Partition Definition
int partition(int *a, int first, int last)
{
int pivot = last;

while (first < last)
{
if (a[first] <= a[pivot])
{
first++;
}
if (a[last] > a[pivot])
{
last--;
}
//Call Swap
swap(a + first, a + last);

if (first > last)
{
//Call Swap
swap(a + last, a + pivot);

return a[last];
}
}
}


//Swap Definition
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

//Print
void print(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d--", a[i]);
i++;
}
}
