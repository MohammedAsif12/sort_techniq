#include <stdio.h>

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

//Print the Elements
for (i = 0; i < n; i++)
{
printf("%d--", a[i]);
}
}
