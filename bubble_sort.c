#include <stdio.h>
#include <stdlib.h>
//Prototype
void Bubble(int a[], int n);

//Main Function
int main()
{
//Declare Variables
int n, i = 0;

//Prompt to Enter n
printf("Enter the Value Of n: \n");
scanf("%d", &n);

//Now,declare an array
int a[n];

//Prompt to Enter the values
printf("Enter the Elements of n: \n");

//Read the Elements of n
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//Call Bubble function
Bubble(a, n);
}

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

for(i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
}

