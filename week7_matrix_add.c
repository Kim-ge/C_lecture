#include <stdio.h>

#define ROWS 3
#define COLS 3
int main(void) {
	int r, c;
	int A[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int B[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int C[ROWS][COLS];


	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c]+B[r][c];
			printf("%d", C[r][c]);
		}
		printf("\n");
	}


	return 0;
}
