//#include "main.c"
#include <stdio.h>
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

//print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}
}

