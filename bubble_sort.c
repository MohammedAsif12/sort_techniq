#include <stdio.h>
#include <time.h>

//Initialize Time 
double time_spent = 0.0;

//Start Time
clock_t clock();

//Function Definition
void Bubble(int a[], int n)
{
int temp, i, j;

for(i = 1; i<n; i++)
 {
for(j = 0; j<n-i; j++)
  {
  if(a[j] > a[j + 1])
   {
    temp = a[j];
    a[j] = a[j + 1];
    a[j + 1] = temp;
   }
  } 
 }


//End Time
clock_t end = clock();


//print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}

//Calculate Total Time
time_spent = time_spent + ((double)end / CLOCKS_PER_SEC);
printf("\nTotal Time Taken for Bubble Sort is %f\n", time_spent);
}
