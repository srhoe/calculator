#include <stdio.h>

//Empty varibles.
int numb1, numb2, res;

//Create a function that add two numbers together.
int sum(int numb1, int numb2) {
	int numb3;
	numb3 = numb1 + numb2;
	return(numb3);
}

int main (void) {
	printf("What two numbers to add: ");
	scanf("%d %d", &numb1, &numb2);
	//Call the function with two parameters.
	res = sum(numb1, numb2);

	//Print the results.
	printf("The result is: %d\n", res);
	return 0;
}


