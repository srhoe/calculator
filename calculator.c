#include <stdio.h>

int main (void) {
	//Varibles are asigned to a number representing a number of an operation.
	int add = 1;
	int subtract = 2;
	int multiplication = 3;
	int division = 4;
	int selection;
	int numb1, numb2, res;
	int sum(int numb1, int numb2);
	int sub(int numb1, int numb2);
	int multip(int numb1, int numb2);
	int div(int numb1, int numb2);
	//Prompting the user and ask what operation would they want to preform.
	printf("What operation would you like to use: 1)add, 2)subtract, 3)multiplication, or 4)division?\n");
	scanf("%d", &selection);

	//Here's the if statement checking what the user selected is true and then exeucute, this code.
	if(selection == add) {
		printf("What two number would you like too add?\n");
		scanf("%d %d", &numb1, &numb2);
		int res = sum(numb1, numb2);
		printf("Result: %d\n",res);

	}else if(selection == subtract) {
		printf("What two number would you like too subtract?\n");
		scanf("%d %d", &numb1, &numb2);		
		int res = sub(numb1, numb2);
		printf("Result: %d\n",res);
	
	}else if (selection == multiplication) {
		printf("What two number would you like too multiply?\n");
		scanf("%d %d", &numb1, &numb2);		
		int res = multip(numb1, numb2);
		printf("Result: %d\n",res);
	
	}else if (selection == division) {
		printf("What two number would you like too divid?\n");
		scanf("%d %d", &numb1, &numb2);		
		int res = div(numb1, numb2);
		printf("Result: %d\n",res); 

	}else {
		//Throws an err.
		printf("err");	
		}
return 0;
}

//Created an add function.
int sum(int numb1, int numb2) {
	int numb3;
	numb3 = numb1 + numb2;
	return(numb3);
}

int sub(int numb1, int numb2) {
	int numb3;
	numb3 = numb1 - numb2;
	return(numb3);
}

int multip(int numb1, int numb2) {
	int numb3;
	numb3 = numb1 * numb2;
	return(numb3);
}

int div(int numb1, int numb2) {
	int numb3;
	numb3 = numb1 / numb2;
	return(numb3);
}
	
