#include <stdio.h>

int main() 
{
    int n, num, index = -1;
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int list[n];
    printf("Hay nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
    	printf("Hay nhap phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("Hay nhap phan tu can tim: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (list[i] == num) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("Phan tu %d trong mang duoc tim thay tai vi tri: %d\n", num, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", num);
    }

    return 0;
}

