#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand();
	int number = rand() % 100 + 1;
	int count;
	
	printf("我已经想好了一个1到100间的数，请你猜猜这个数\n");
	do{
		scanf("%d", &a);
		count ++;
		if ( a > number ){
			printf("你猜的数大了，这都猜不到，废物\n");
		}else if ( a < number ){
			printf("你猜的数小了，这都猜不到，废物\n");
		}
	}while( a != number);
	printf("牛逼，你猜对了\n");
	
	return 0;
}
