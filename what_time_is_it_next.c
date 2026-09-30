#include <stdio.h>
int main()
{
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	
	int c = (((a / 100) * 60) + (a % 100)) + b;
	int d = ((c / 60) * 100) + (c % 60);
	
	printf("%d", d);
	
	return 0;
}
