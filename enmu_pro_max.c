#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	enum color { red = 1, green, blue };
	
	enum color favorite_color;
	
	printf("请输入你喜欢的颜色： (1. red, 2. green, 3. blue)");
	scanf("%u", &favorite_color);
	
	switch (favorite_color)
	{
	case red:
		printf("红色");
		break;
	case green:
		printf("绿色");
		break;
	case blue:
		printf("蓝色");
		break;
	default:
		printf("你没有选择颜色");
	}
	return 0;
}
