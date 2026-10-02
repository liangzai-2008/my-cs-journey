#include <stdio.h>
int main() {
	int price;
	int bill;

	printf("请输入金额");
	scanf("%d", &price);
	printf("请输入票面");
	scanf("%d", &bill);

	int less = price - bill;
	int more = bill - price;

	if ( bill > price ) {
		printf("应该找您%d元，谢谢惠顾！\n", more);
	}else if( bill == price ){
		printf("谢谢惠顾!\n");
	}
	else {
		printf("您需要多付%d元\n", less);
	}
	
	return 0;
}
