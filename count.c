#include <stdio.h>
int how_many;
int count(int how_many);

int main(void){
	printf("What should I count too?");
	scanf("%d", &how_many);
	count(how_many);
}

int count(int how_many){
	for(int i = 0; i < how_many; i++){
		printf("%d\n",i);
	}
return 0;
}
