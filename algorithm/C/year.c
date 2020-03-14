#include <stdio.h>

int main() {
	int input1;
	
	scanf("%d",&input1);
	
	if(input1>=1 && input1 <= 4000) {
		if((input1 % 4)==0) {
			if((input1 % 100) != 0 || (input1 % 400) == 0)
				printf("1\n");
			else 
				printf("0\n");
		}
		else {
			printf("0\n");
		}
		
	}
	return 0;
}
