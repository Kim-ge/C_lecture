#include<stdio.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 12,3, 19, 6, 18, 8, 12, 4, 1, 19};
	int i, minimum;
	printf("[");
  
	for (i = 1; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
  
	printf("]\n");
	minimum = prices[0];
  
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum)
			minimum = prices[i];
	}
	printf("최소값은 %d입니다.\n", minimum);

	return 0;
}
