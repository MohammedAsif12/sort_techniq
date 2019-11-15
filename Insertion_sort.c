#include <stdio.h>

//Prototypes
void Insertion(int a[], int n);

//Main function
int main()
{
//Declare Variables
int n, i;

//Prompt + Read n
printf("Enter the Value of n: \n");
scanf("%d", &n); 

//Now, Declare an array
int a[n];

//Prompt to Enter the Elements
printf("Enter the Elements of n: \n");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

//call Insertion
Insertion(a, n);
}

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

for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
}
