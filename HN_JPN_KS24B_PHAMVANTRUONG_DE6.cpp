
#include <stdio.h>

int Mang(int arr[]) {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap các phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return n;
}

int Menu() {
    int choice;
    printf("\n--------- MENU ----------\n");
    printf("1. Nhap so phan tu và giá tri cho mang\n");
    printf("2. Thoat chuong trinh\n");
    printf("==========================\n");
    printf("Chon mot chuc nang: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int arr[100], n = 0;
    int choice;

    do {
        choice = Menu();

        if (choice == 1) {
            n = Mang(arr);
            printf("Mang sau khi nhap:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else if (choice == 2) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 2);

    return 0;
}


