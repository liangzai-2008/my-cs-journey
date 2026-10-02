#include <stdio.h>
int main()
{
	int price;
	int bill;
	
	printf("请输入金额");
	scanf("%d", &price);
	printf("请输入票面");
	scanf("%d", &bill);
	
	int less = price - bill;
	int more = bill - price;
	
	if( bill < price ){
		printf("您需要多付%d元", less);
	}
	if( bill > price ){
		printf("您多付了%d元，现在找您%d元", more, more);
	}
	if( bill = price ){
		printf("谢谢惠顾");
	}
	
	return 0;
}
