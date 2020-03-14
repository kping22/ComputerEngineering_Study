#include <stdio.h>

int main() {
	int i, input,max=0, lo;
	int array[9];
	
	for(i=0; i<9; i++) {
			scanf("%d",&array[i]);
			if(max < array[i]) {
				max = array[i];
				lo = i+1;
			}
	}
	
	printf("%d\n%d", max,lo);
	return 0;
}
