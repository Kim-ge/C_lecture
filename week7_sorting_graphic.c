#include <stdio.h>
#include <windows.h>
#define SIZE 10

int main(void) {
	int i, k, tmp;
	int list[SIZE] = { 100, 150, 50, 78, 89, 12, 56, 38, 99, 66 };
	HDC hdc = GetWindowDC(GetForegroundWindow());

	for (k = 0; k < SIZE; k++) {
		Rectangle(hdc, 0, 0, 800, 800);
		for (i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}

		for (i = 0; i < SIZE; i++) {
			Rectangle(hdc, 200 + i * 50, 200 - list[i], 250 + i * 50, 200);
		}
		Sleep(1000);
	}

	return 0;
}
