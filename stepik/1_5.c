#include <stdio.h>

/*
int main() {
	int N;
	int a;
	a = 1;
	scanf("%d", &N);
	if(N > 0) {
		printf("%d", a*a);
		a++;
		while(a*a <= N) {
			printf(" %d", a*a);
			a++;
		}		
	}
} 
*/

int main() {
	int A;
	scanf("%d", &A);
	int a;
	a = 2;
	while(a <= A) {
		if(A % a == 0) {
			printf("%d", a);
			break;
		}
		else a++;
	}
}


