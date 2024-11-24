#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("nhap vao 3 so nguyen bat ki :");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num3<num2 && num3>num1){
		printf("%d nam giua %d va %d ", num3, num1, num2);
	}else 
		printf("%d khong nam giua %d va %d ", num3, num1, num2);
	return 0;
}

