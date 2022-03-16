int main(void) {
	int x;
	int y;
	int result=0;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%d", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf("%d", &y);

	printf("두 수의 합 = %d\n", (x+y));
	printf("두 수의 차 = %d\n", (x-y));
	printf("두 수의 곱 = %d\n", (x*y));
	printf("두 수의 몫 = %d\n", (x/y));

	return 0;

}
