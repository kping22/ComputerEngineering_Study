#include <stdio.h>

int main() {
	int input1, input2, i, result;
	scanf("%d",&input1);
	scanf("%d",&input2);
	
	result = input1 * input2;
	for(i=0; i<3; i++) {
		printf("%d\n", input1*(input2%10));
		input2 = input2/10;
	}
	printf("%d", result);
	
	return 0;
}
