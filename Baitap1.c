#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;  

    // Yêu cầu người dùng nhập vào một số ngày
    printf("Nhap so ngay: ");
    if (scanf("%d", &x) != 1) {   // Kiểm tra dữ liệu nhập vào
        printf("Du lieu nhap khong hop le. Vui long nhap mot so nguyen.\n");
        return 1;  
    }

    // Kiểm tra giá trị của 'x' 
    switch (x) {
        case 1: printf("Thu hai\n"); break;
        case 2: printf("Thu ba\n"); break;
        case 3: printf("Thu tu\n"); break;
        case 4: printf("Thu nam\n"); break;
        case 5: printf("Thu sau\n"); break;
        case 6: printf("Thu bay\n"); break;
        case 7: printf("Chu nhat\n"); break;
        default: printf("So ngay khong hop le. Vui long nhap tu 1 den 7.\n"); break;
    }

    return 0;  
}
