#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int ks_ngan, ks_tram, ks_chuc, ks_donvi;  
    printf("Nhap vao so n: ");
    scanf("%d", &n); 

    // Tach cac chu so tu so nguyen n
    ks_ngan = n / 1000;                // Lay chu so hang nghin
    ks_tram = (n % 1000) / 100;        // Lay chu so hang tram
    ks_chuc = (n % 100) / 10;          // Lay chu so hang chuc
    ks_donvi = n % 10;                 // Lay chu so hang don vi

    // Hien thi chu so hang nghin (neu co)
    if (ks_ngan != 0) {
        printf("%d ", ks_ngan);
    }

    // Hien thi chu so hang tram (neu co hoac neu da co chu so hang nghin)
    if (ks_tram != 0 || ks_ngan != 0) {
        printf("%d ", ks_tram);
    }

    // Hien thi chu so hang chuc (neu co hoac neu da co chu so hang tram hoac hang nghin)
    if (ks_chuc != 0 || ks_tram != 0 || ks_ngan != 0) {
        printf("%d ", ks_chuc);
    }

    // Luon luon hien thi chu so hang don vi (vi khong bao gio bang 0 neu n khac 0)
    printf("%d\n", ks_donvi);

    return 0;
}
