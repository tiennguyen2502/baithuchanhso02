#include <stdio.h>
#include <math.h>
int main() {
    float  a,b,c,delta,x1,x2;
    printf("Nhap he so a,b,c:");
    scanf("%f%f%f", &a,&b,&c);
    delta= b*b-4*a*c;

    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        x1 = -b/(2*a);
        printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n",x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f\n",x1,x2);
    }
    return 0;
} 