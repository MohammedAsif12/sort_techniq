#include <stdio.h>
#include <time.h>


//Prototypes
void merge(int *a, int first, int mid, int last);
void print_merge(int *a, int n);


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


//Print Elements
void print_merge(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d--", a[i]);
i++;
}

}
