#include <stdio.h>

//Prototypes
void Selection(int a[], int n);

//Main Function
int main()
{
//Declare Variables
int n, i;

//Prompt to enter the Value of n
printf("Enter the Value of n: \n");
scanf("%d", &n);

//Now Declare an array
int a[n];

//Enter the Elements of n and Read
printf("Enter the Elements of n: \n");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Call Selection
Selection(a, n);
}

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

for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
}
