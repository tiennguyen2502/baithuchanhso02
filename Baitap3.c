#include <stdio.h>  
#include <stdlib.h>

int main() {
    float diem; 
    printf("Nhap diem: ");  
    scanf("%f", &diem); 

    // Kiem tra neu diem khong hop le
    if (diem < 0.0 || diem > 10.0) {
        printf("Diem khong hop le! Vui long nhap diem tu 0 den 10.\n");
        return 0; // Ket thuc chuong trinh neu diem khong hop le
    }

    // Phan loai sinh vien dua tren diem nhap vao
    if (0.0 <= diem && diem < 3.0) {
        printf("Sinh vien xep loai kem\n");
        printf("Thang diem theo he 4: diem chu F va diem so %.1f\n", 0.0);
    } else if (3.0 <= diem && diem < 4.0) {
        printf("Sinh vien xep loai yeu\n");
        printf("Thang diem theo he 4: diem chu D va diem so %.1f\n", 1.0);
    } else if (4.0 <= diem && diem < 5.0) {
        printf("Sinh vien xep loai trung binh yeu\n");
        printf("Thang diem theo he 4: diem chu D+ va diem so %.1f\n", 1.5);
    } else if (5.0 <= diem && diem < 6.0) {
        printf("Sinh vien xep loai trung binh\n");
        printf("Thang diem theo he 4: diem chu C va diem so %.1f\n", 2.0);
    } else if (6.0 <= diem && diem < 7.0) {
        printf("Sinh vien xep loai trung binh kha\n");
        printf("Thang diem theo he 4: diem chu B va diem so %.1f\n", 2.5);
    } else if (7.0 <= diem && diem < 8.0) {
        printf("Sinh vien xep loai kha\n");
        printf("Thang diem theo he 4: diem chu B+ va diem so %.1f\n", 3.0);
    } else if (8.0 <= diem && diem < 9.0) {
        printf("Sinh vien xep loai gioi\n");
        printf("Thang diem theo he 4: diem chu A va diem so %.1f\n", 3.5);
    } else if (9.0 <= diem && diem <= 10.0) {
        printf("Sinh vien xep loai xuat sac\n");
        printf("Thang diem theo he 4: diem chu A+ va diem so %.1f\n", 4.0);
    }

    return 0; 
}
