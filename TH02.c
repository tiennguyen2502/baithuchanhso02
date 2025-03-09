#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;     // Khai báo biến nguyên 'a' dùng để lưu giá trị người dùng nhập vào

    printf("Nhap mot so tu 0 den 9:");
    scanf("%d", &a);
switch(a)     // Câu trúc switch dùng để xử lý các trường hợp khác nhau dựa trên giá trị của 'a'

{
    case 0: printf("khong\n");break;
    case 1: printf("mot\n");break;
    case 2: printf("hai\n");break;
    case 3: printf("ba\n");break;
    case 4: printf("bon\n");break;
    case 5: printf("nam\n");break;
    case 6: printf("sau\n");break;
    case 7: printf("bay\n");break;
    case 8: printf("tam\n");break;
    case 9: printf("chin\n");break;
    default: printf("So khong hop le\n"); break; //  Trường hợp 'a' không nằm trong khoảng 0-9
}
}
