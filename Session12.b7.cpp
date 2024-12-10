#include <stdio.h>

void createMatrix(int row, int col, int matrix[100][100]) {
    printf("Moi ban nhap cac phan tu :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int row, int col, int matrix[100][100]) {
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
}

int main() {
    int row, col;
    int matrix[100][100];
    printf("Moi ban nhap so hang : ");
    scanf("%d", &row);
    printf("Moi ban nhap so cot: ");
    scanf("%d", &col);

   
    if (row <= 0 || col <= 0 || row > 100 || col > 100) {
        printf("Khong hop le\n");
        return 1;
    }
    createMatrix(row, col, matrix);
    printMatrix(row, col, matrix);

    return 0;
}
