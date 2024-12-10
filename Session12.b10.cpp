#include <stdio.h>

int main() {
    int array[100]; 
    int size = 0;  
    int choice, subChoice;
    void enterElements(int arr[], int *size);
    void printElements(int arr[], int size);
    void addElement(int arr[], int *size, int position, int value);
    void editElement(int arr[], int size, int position, int value);
    void deleteElement(int arr[], int *size, int position);
    void sortElements(int arr[], int size, int ascending);
    int linearSearch(int arr[], int size, int value);
    int binarySearch(int arr[], int size, int value);

    do {
        printf("\nMENU\n");
        printf("1.Nhap so phan tu can nhap va cac gia tri\n");
        printf("2.In ra gia tri cac phan tu dang quan li\n");
        printf("3.Them mot phan tu vao vi tri chi dinh\n");
        printf("4.Sua mot phan tu o vi tri chi dinh\n");
        printf("5.Xoa mot phan tu o vi tri chi dinh\n");
        printf("6.Sap xep cac phan tu \n");
        printf("7.Tim kiem phan tu nhap vao \n");
        printf("8.Thoat\n");
        printf(" Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                enterElements(array, &size);
                break;
            }
            case 2: {
                printElements(array, size);
                break;
            }
            case 3: {
                int position, value;
                printf("Nhap vi tri duoc them: ", size + 1);
                scanf("%d", &position);
                printf("Nhap gia tri duoc them vao: ");
                scanf("%d", &value);
                addElement(array, &size, position - 1, value);
                break;
            }
            case 4: {
                int position, value;
                printf("Nhap vi tri can thay doi: ", size);
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                editElement(array, size, position - 1, value);
                break;
            }
            case 5: {
                int position;
                printf("Nhap vi tri muon xoa): ", size);
                scanf("%d", &position);
                deleteElement(array, &size, position - 1);
                break;
            }
            case 6: {
                printf("Tuy chon sap xep:\n");
                printf("a. Descending (Enter 1)\n");
                printf("b. Ascending (Enter 2)\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);
                sortElements(array, size, subChoice == 2);
                break;
            }
            case 7: {
                printf("Lua chn tim kiem:\n");
                printf("a. Linear search (Enter 1)\n");
                printf("b. Binary search (Enter 2)\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                int value, result;
                printf("Nhap gia tri de tim kiem: ");
                scanf("%d", &value);

                if (subChoice == 1) {
                    result = linearSearch(array, size, value);
                } else {
                    sortElements(array, size, 1); 
                    result = binarySearch(array, size, value);
                }

                if (result == -1) {
                    printf("Khong thop le\n");
                } else {
                    printf("Gia tri tim thay o vi tri %d.\n", result + 1);
                }
                break;
            }
            case 8:
                printf("Thoat\n");
                break;
            default:
                printf("Khong hop le\n");
        }
    } while (choice != 8);

    return 0;
}

void enterElements(int arr[], int *size) {
    printf("Nhap vao phan tu: ");
    scanf("%d", size);
    if (*size < 1 || *size > 100) {
        printf("Khong hop le\n");
        *size = 0;
        return;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < *size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printElements(int arr[], int size) {
    printf("Phan tu mang:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void addElement(int arr[], int *size, int position, int value) {
    if (position < 0 || position > *size || *size >= 100) {
        printf("Khong hop le.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

void editElement(int arr[], int size, int position, int value) {
    if (position < 0 || position >= size) {
        printf("Khong hop le\n");
        return;
    }
    arr[position] = value;
}

void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Khong hop le\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void sortElements(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang trong\n");
}

int linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int value) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value) return mid;
        if (arr[mid] < value) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
