#include <stdio.h>

int main() {
	int i,N,X;
	scanf("%d %d", &N, &X);
	int array[N];
	if(N >= 1 && X<=10000){
		int array[N];
		for(i=0; i<N; i++) {
			scanf("%d", &array[i]);
		}
		for(i=0; i<N; i++) {
			if(X>array[i]) {
				printf("%d ", array[i]);
			}
		}	
	}
	
	return 0;
}
