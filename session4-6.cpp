#include<stdio.h>
int main(){
	int dau, cuoi, dien, tien;
	printf("Tien dien dau thang la: ");
	scanf("%d", &dau);
	printf("Tien dien cuoi thang la: ");
	scanf("%d", &cuoi);
	dien = cuoi - dau;
	if (0<=dien && dien<50){
		tien= dien * 10000;
		printf("Tien dien la: %d dong", tien);
	}
	else if (50<=dien && dien<100){
		tien= dien * 15000;
		printf("Tien dien la: %d dong", tien);
	}
	else if (100<=dien && dien<150){
		tien= dien * 20000;
		printf("Tien dien la: %d dong", tien);
	}
	else if (150<=dien && dien<200){
		tien= dien * 25000;
		printf("Tien dien la: %d dong", tien);
	}
	else if (200<=dien){
		tien= dien * 30000;
		printf("Tien dien la: %d dong", tien);
	}
	return 0;
	
}
