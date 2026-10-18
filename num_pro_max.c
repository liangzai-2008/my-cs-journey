#include <stdio.h>
int main()
{
	int x;
	int n = 0;
	
	scanf("%d", &x);
	if( x == 0){
		n = 1;
	}else{
		if( x < 0 ){
			x = -x;
		}
	}while( x > 0 ){
		x /= 10;
		n++;
	}
	printf("%d", n);
	return 0;
}
