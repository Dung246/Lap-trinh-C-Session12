#include <stdio.h>

int tim_UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
     while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
     }
    return a;
}

int main() {
    int num1, num2, UCLN;
    printf("Moi ban nhap so thu nhat : ");
    scanf("%d", &num1);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);
     UCLN = tim_UCLN(num1, num2);
     printf("UCLN cua %d va %d la : %d\n", num1, num2, UCLN);

    return 0;
}
