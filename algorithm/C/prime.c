#include <stdio.h>

int main() {
	int i,j;
	int count = 0; 
	int prime = 0;
	
	for(i=1; i<=1000; i++) {
		for(j=1; j<=i; j++) {
			if((i%j) == 0) {
				count++;
			}
		}
		if(count == 2) {
			printf("�� ���� �Ҽ��Դϴ�. : %d\n", i);
			prime++;
			count = 0;
		}
		else {
			count = 0;
		}
	}
	printf("�Ҽ��� ������? %d\n", prime);
	
	return 0;
}
