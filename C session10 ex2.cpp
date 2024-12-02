#include <stdio.h>

void bubbleSort(int list[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() 
{
    int n;
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int list[n];
    printf("Hay nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
    	printf("Hay nhap phan tu thu %d cua mang: ", i + 1);
        scanf("%d", &list[i]);
    }
    bubbleSort(list, n);
    printf("Mang sau khi sap xep tu thu tu tang dan la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

