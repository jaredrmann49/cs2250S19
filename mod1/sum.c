#include <stdio.h>
int main()
{
	//Task: Define two integers
	int age = 23;
	int weight = 27;

	//Display their values
	
	printf("please enter an integer value\n");
	// To capture user input use the scanf() function
	// Use same placeholders as printf: %d for integers
	// BUT remember to use the address operator before th
	// variable name, &age
	
	scanf("%d", &age);
	printf("The value of age is =  %d\n", age);
	
	scanf("%d", &weight);
	printf("please enter another integer value\n");
	
	printf("The value of weight is =  %d\n", weight);
			
	//Display the sum of them
	printf("The sum of %d + %d is = %d\n", age, weight, age + weight);
	

	return 0;
}


