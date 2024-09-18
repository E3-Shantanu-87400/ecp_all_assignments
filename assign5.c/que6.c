#include <stdio.h>
#include <stdlib.h>

void unique(int *arr, int a);

int main()
{
    int a;
    printf("Enter the size: ");
    scanf("%d", &a);

    int *arr = (int *)malloc(a * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    unique(arr, a);

    free(arr);
    return 0;
}

void unique(int *arr, int a)
{
    int *unique_arr = (int *)malloc(a * sizeof(int));
    if (unique_arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int count = 0;

    for (int i = 0; i < a; i++) {
        int j;
        for (j = 0; j < count; j++) {
            if (arr[i] == unique_arr[j]) {
                break;
            }
        }
        if (j == count) {
            unique_arr[count++] = arr[i];
        }
    }

    printf("The unique array is:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique_arr[i]);
    }
    printf("\n");

    free(unique_arr);
}

