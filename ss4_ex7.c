#include <stdio.h>

int main() {
    int year;
    printf("Nhap vao so nam: ");
    scanf("%d", &year);
    if(year < 0){
        printf("Nam khong hop le");
    }else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("%d la nam nhuan", year);
    }else{
        printf("%d khong phai la nam nhuan", year);
    }
    return 0;
}

