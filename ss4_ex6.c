#include <stdio.h>

int main()
{
	int numFirst, numLast, num;
	printf("nhap chi so cong to dien dau thang :");
	scanf("%d", &numFirst);
	printf("nhap chi so cong to dien cuoi thang :");
	scanf("%d", &numLast);
	if(numFirst < 0 || numLast < 0 || numFirst > numLast){
		printf("chi so khong hop le\n");
		return 1;
	}
	num = numLast - numFirst;
	float totalCost;
	if(num>=0 && num<50){
		totalCost = (float)num * 10000;
	}else if(num>=50 && num<100){
		totalCost = (float)num * 15000;
	}else if(num>=100 && num<150){
		totalCost = (float)num * 20000;
	}else if(num>=150 && num<200){
		totalCost = (float)num * 25000;
	}else{
		totalCost = (float)num * 30000;
	}
	printf("Tong so dien tieu thu: %d kWh\n", num);
    printf("Tong tien dien phai tra: %.2f VND\n", totalCost);
	return 0;
}

