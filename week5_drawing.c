#include<stdio.h>
#include<windows.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	char command;

	printf("명령어를 입력하세요 : ");
	command = getchar();

	if (command == 'r') {
		Rectangle(hdc, 100, 100, 200, 200);
	}
	else if (command == 'c') {
		Ellipse(hdc, 100, 100, 200, 200);
	}
	else {
		printf("잘못된 명령어입니다.\n ");
	}

	return 0;
}
