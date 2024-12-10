#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

void displayMenu(int n, int m, int array[100][100]) {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1.Nhap gia tri cac phan tu trong mang\n");
        printf("2.In gia tri cac phan tu trong mang theo ma tran\n");
        printf("3.In ra cac pahn tu o goc theo ma tran\n");
        printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu trong ma tran\n");
        printf("6.In ra cac phan tu la so nguyen to trong ma tran \n");
        printf("7.Thoat\n");
        printf("choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("cac phan tu trong mang\n", n, m);
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("[%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &array[i][j]);
                    }
                }
                break;

            case 2: 
                printf("Mamh theo ma tran :\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", array[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
                printf("Cac phan tu o goc ma tran la :\n");
                printf("%d %d\n", array[0][0], array[0][m - 1]);
                printf("%d %d\n", array[n - 1][0], array[n - 1][m - 1]);
                break;

            case 4:
                printf("Duong bien :\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", array[i][j]);
                        } else {
                            printf("  "); 
                        }
                    }
                }
                break;

            case 5: 
                printf("Duong cheo chinh : ");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", array[i][i]);
                }
                printf("\nDuong cheo phu: ");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", array[i][m - i - 1]);
                }
                break;

            case 6: 
                printf("So nguyen to la :\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (isPrime(array[i][j])) {
                            printf("%d ", array[i][j]);
                        }
                    }
                }
                break;

            case 7:
                printf("Thoat\n");
                break;

            default:
                printf("Thu lai \n");
                break;
        }
    } while (choice != 7);
}


int main() {
    int n, m;
    int array[100][100]; 
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
     if (n <= 0 || m <= 0 || n > 100 || m > 100) {
        printf("Khong hop le \n");
        return 1;
     }
    displayMenu(n, m, array);

    return 0;
}
