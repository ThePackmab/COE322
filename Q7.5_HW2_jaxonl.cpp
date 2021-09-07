/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

// Write a void funtion swap of two parameters that exchanges the input values:
// eg i = 1 and j = 2 so output has i = 2, j = 1


void swap(int *, int *);
int main() 
{

	int x1;
    int x2;

	printf("Function: Swapping two input numbers : \n");
	printf("First number x1 is : ");
	scanf("%d", &x1);
	printf("Second number x2 is : ");
	scanf("%d", &x2);

	printf("\n\n x1 = %d, x2 = %d", x1, x2);

	swap(&x1, &x2);

	printf("\n\n After making the switch x1 = %d, x2 = %d", x1, x2);

	return 0;
}

// Create function first
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	// using a third temporary variable to be able to swap the two
}
