#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	if (a%3==0 && a%5==0){
		printf("So %d chia het cho ca 3 va 5 ", a);
	}
	else if (a%3==0){
		printf("So %d chia het cho 3", a);
	}
	else if (a%5==0){
		printf("So %d chia het cho 5", a);
	}
	else {
		printf("So %d khong chia het cho ca 3 va 5", a);
	}
	return 0;
}
