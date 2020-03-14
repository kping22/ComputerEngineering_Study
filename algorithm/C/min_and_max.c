#include <stdio.h>

int main() {
	int input1, i, max, min;
	scanf("%d",&input1);
	
	int array[input1];
	
	// 처음안 사실 scanf에는 그냥 for문을 써서 해도 스페이스 공백알아서 구분함. 
	if(input1 >=1 && input1 <=1000000) {
		for(i=0; i<input1; i++)
			scanf("%d", &array[i]);
		
		min = array[0];
		max = array[0];
		for(i=0; i<input1; i++) {
			if(min > array[i]) {
				min = array[i];
			}
			if(max < array[i]) {
				max = array[i];
			}
		} 
		printf("%d %d", min,max);
	}
	return 0;
}
