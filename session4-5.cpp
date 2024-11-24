#include<stdio.h>
int main(){
	int a, b, c;
	printf("So thu nhat: ");
	scanf("%d", &a);
	printf("So thu hai: ");
	scanf("%d", &b);
	printf("So thu ba: ");
	scanf("%d", &c);
	if ( a<b && a<c && c<b ){
		printf("So thu ba nam trong khoang tu %d den %d", a, b);

	}
	else if ( a>b && a>c && c>b ){
		printf("So thu ba nam trong khoang tu %d den %d", b, a);
	}
	else {
		printf("So thu ba khong nam trong khoang");
	}
	return 0;
}
