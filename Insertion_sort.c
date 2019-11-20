//#include "main.c"
#include <stdio.h>
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

//Print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}
}
