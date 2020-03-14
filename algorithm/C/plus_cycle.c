#include <stdio.h>
int main() {
	int i, j, input, sum, count=0,result=0;
	
	scanf("%d", &input);
	if(input<10) input *= 10;
	result = input;
	count++;
	while(1) {
		i = result/10;
		j = result%10;
		sum = i+j;
		if(sum > 9) {
			result = (j*10) + (sum%10);
		}	
		else {
			result = (j*10) + sum;
		}
		if(input == result) {
			break;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}
