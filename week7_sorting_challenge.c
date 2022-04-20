#include<stdio.h>
#define SIZE 8

int main(void) {
	int i, k, tmp;
	int list[SIZE] = { 10, 5, 8, 9, 6, 4, 1, 2 };

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}

		for (i = 0; i < SIZE; i++) {
			printf("%d", list[i]);
		}
		printf("\n");
	}

	return 0;
}
