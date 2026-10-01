#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	
	int result = (num / 16) * 10 + (num % 16);
	
	printf("%d\n", result);
	
	return 0;
}
