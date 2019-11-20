#include <stdio.h>
#include <time.h>

//Initialize Time
double time_spent1 = 0.0;

//Start Time
clock_t clock();

//Function Definition
void Insertion(int a[], int n)
{

int i, j, temp;

for (i = 0; i < n; i++)
{
 temp = a[i];

for (j = i; j > 0 && temp < a[j - 1]; j--)
{
 a[j] = a[j - 1];
}
a[j] = temp;
}

//End Time
clock_t end = clock();


//Print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}

//Calculate Total Time
time_spent1 = time_spent1 + ((double)end / CLOCKS_PER_SEC);
printf("\nTotal Time Taken for Insertion Sort is %f\n", time_spent1);
}
