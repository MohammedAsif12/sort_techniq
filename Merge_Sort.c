#include <stdio.h>

//Prototypes
void merge_sort(int *a, int first, int last);
void merge(int *a, int first, int mid, int last);
void print(int *a, int n);

//Main Function
int main()
{
//Declare Variables
int i, j, first, last, n;

//Prompt to enter the value of n + Read
printf("Enter the value of n: \n");
scanf("%d", &n);

//Now, Declare an Array
int a[n];

//Prompt to Enter the Elements of n and Read the Elements
printf("Enter the Elements of n: \n");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Call Merge Function
merge_sort(a, 0, n - 1);

//Call Print Function
print(a, n);
}

//Merge_Sort Definition
void merge_sort(int *a, int first, int last)
{
if (first < last)
{
int mid = (first + last) >> 1;
merge_sort(a, first, mid);
merge_sort(a, mid + 1, last);
merge(a, first, mid, last);
}
}

//Merge Function Definition
void merge(int *a, int first, int mid, int last)
{
int l_size = mid - first + 1;
int r_size = last - mid;
int LA[l_size];
int RA[r_size];
int i, j;
int k = first;

for (i = 0; i < l_size; i++)
{
LA[i] = a[first + i];
}

for (j = 0; j < r_size; j++)
{
RA[j] = a[mid + 1 + j];
}
i = 0;
j = 0;
k = first;

while (i < l_size && j < r_size)
{

if (LA[i] < RA[j])
{
a[k++] = LA[i++];
}
else
{
a[k++] = RA[j++];
}
}

//Copy Remaining bytes
while(i < l_size)
{
a[k++] = LA[i++];
}
while(j < r_size)
{
a[k++] = RA[j++];
}
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
