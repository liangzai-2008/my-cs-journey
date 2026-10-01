#include <stdio.h>
int main()
{
	int num;
	
	scanf("%d", &num);
	
	int d = num / 100;
	int e = (num / 10) % 10;
	int f = num % 10;
	
	int result = f * 100 + e * 10 + d;
	
	printf("%d\n", result);
	
	return 0;
}
