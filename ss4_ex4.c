#include <stdio.h>

int main() {
    int month;
    printf("Nhap vao so thang 1-12: ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay", month);
            break;
        case 2:
            printf("Thang 2 co 28 ngay (hoac 29 ngay neu la nam nhuan)");
            break;
        default:
            printf("So thang khong hop le.\n");
    }

    return 0;
}

