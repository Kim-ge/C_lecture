int main(void) {

	printf("\n");
	int a, b, c,max;
	scanf("%d %d %d", &a, & b, & c);
	max = a;
	if (a < b) {
		max = b;
		if (b < c) {
			max = c;
		}
	}

	printf("가장 큰 수는 %d", max);

	return 0;
}
