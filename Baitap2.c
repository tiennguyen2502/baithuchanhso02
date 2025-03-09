#include <stdio.h>  

#include <stdlib.h>

int main() {
    int M, Y;  // Khai báo hai biến nguyên: 'M' là tháng, 'Y' là năm
    int days;  


    printf("Nhap vao thang M (Nhap vao thang): ");
    scanf("%d", &M); // Đọc giá trị của M từ dữ liệu người dùng nhập
    printf("Nhap vao nam Y (Nhap vao nam): ");
    scanf("%d", &Y); // Đọc giá trị của Y từ dữ liệu người dùng nhập

    // Xác định số ngày trong tháng đã nhập
    switch (M) {
        // Các tháng có 31 ngày
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        // Các tháng có 30 ngày
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        // Tháng 2 (kiểm tra năm nhuận)
        case 2:
            if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {
                days = 29;  // Năm nhuận
            } else {
                days = 28;  // Năm không nhuận
            }
            break;
      
        default:
            printf("Thang khong hop le!\n");  // Thông báo khi tháng không hợp lệ
            return 1; // Kết thúc chương trình với mã lỗi
    }

    // Hiển thị kết quả
    printf("Thang %d nam %d co %d ngay.\n", M, Y, days);
    printf("Month %d of year %d has %d days.\n", M, Y, days); 

    return 0;
