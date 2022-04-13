#include<stdio.h>
#include<windows.h>

int main(void) {
	int answer = 33;
	int guess;
	int tries = 0;

	do {
		printf("정답 추측 : ");
		scanf("%d", &guess);
		tries++;
		if (guess < answer) {
			printf("제시한 정수가 높습니다.\n");
		}
		if (guess > answer) {
			printf("제시한 정수가 낮습니다.\n");
		}
	} while (guess != answer);
	printf("축하합니다. 시도횟수 = %d", tries);

	return 0;
}
