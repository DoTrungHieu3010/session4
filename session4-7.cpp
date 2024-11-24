#include<stdio.h>
int main(){
	int nam;
	printf("Nam ban chon: ");
	scanf("%d", &nam);
	if (nam % 4 == 0){
		printf("Nam %d la nam nhuan", nam);
	}
	else {
		printf("Nam %d khong phai nam nhuan", nam);
	}
	return 0;
}
