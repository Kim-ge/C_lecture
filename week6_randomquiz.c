#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int ans;
	printf("산수 문제를 자동으로 출제합니다.\n");
	srand(time(NULL));

	while (1) {
		int a = rand() % 100;
		int b = rand() % 100;
		printf("%d + %d = ", a, b);
		scanf("%d", &ans);

		if (ans == (a + b)) {
			printf("맞았습니다.\n");
			break;
		}
		else
			printf("틀렸습니다.\n");

	}
	return 0;
	
}
