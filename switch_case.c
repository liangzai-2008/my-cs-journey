#include <stdio.h>
int main()
{
	int type;
	scanf("%d", &type);
	
	switch( type ){
	case 1:
		printf("你好");
		break;
	case 2:
		printf("我不好");
		break;
	case 3:
		printf("我爱你");
		break;
	case 4:
		printf("我不爱你了");
		break;
	}
	
	return 0;
}
