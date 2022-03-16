int main(void) {
	int sum;
	int price;
	int days;

	sum = 0;
	printf("여행은 몇박인가요?:");
	scanf("%d", &days);

	printf("항공권 가격:");
	scanf("%d", &price);
	sum = sum + price;

	printf("호텔 1박 가격:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("하루에 필요한 용돈:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("==========================\n");
	printf("총 여행 비용:%d\n", sum);
	printf("==========================\n");

	return 0;
}
