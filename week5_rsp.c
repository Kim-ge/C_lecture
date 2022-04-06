#include<stdio.h>
#include<stdlib.h>

int main(void) {
	srand(time(NULL));
	int computer = rand() % 3;
	int user;

	printf("0,1,2 중 하나 입력 : ");
	scanf("%d", &user);

	if ((user + 1) == computer) {
		printf("컴퓨터 승리\n");
	}
	else if (user == computer) {
		printf("무승부\n");
	}
	else {
		printf("사용자 승리\n");
	}

	return 0;
}
