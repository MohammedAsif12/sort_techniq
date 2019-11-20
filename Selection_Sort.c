#include <stdio.h>
#include <time.h>

//Initialize time
double time_spent2 = 0.0;

//Start Time
clock_t clock();

//Function Definition
void Selection(int a[], int n)
{
int i, j, min, temp;
for (i = 0; i < n; i++)
{
min = i;
for (j = i + 1; j < n; j++)
{
if ( a[j] < a[min] )
{
min = j;
}
}
temp = a[i];
a[i] = a[min];
a[min] = temp;
}

//End Time
clock_t end = clock();

//Print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}

//Calculate Total Time
time_spent2 = time_spent2 + ((double)end / CLOCKS_PER_SEC);
printf("\nTotal Time Taken by Selection Sort is %f\n", time_spent2);
}
