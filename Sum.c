// C program sum of two numbers
#include <stdio.h>

int main()
{
	int A, B, sum = 0;

	// ask for  number in variable A  from user
	printf("Enter two numbers A and B : \n");

	// get number 1 from user
	scanf("%d", &A);

	// get number 2 from user
    scanf("%d", &B);
	
	//  Formula of sum using '+' operator
	sum = A + B;

	// Print the sum
	printf("Sum of A and B is: %d", sum);

	return 0;
}
