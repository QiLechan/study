#include <stdio.h>

int size;

int printArr(int arr[])

{

    for (int i = 0; i < size; i++)

    {

        printf("%d", arr[i]);
    }
    free(arr);
    printf("\n");

    return 0;
}

int generate(int arr[], int i, int count)

{

    // 1的个数

    if (count == 0)

    {
        printArr(arr);

        return 0;
    }

    // 等于数组长度时退出

    if (i == size)

    {
        return 0;
    }

    // 如果改为0

    arr[i] = 0;
    generate(arr, i + 1, count);

    // 如果改为1

    arr[i] = 1;
    generate(arr, i + 1, count - 1);

    // 复原

    arr[i] = 0;
    return 0;
}

int main(void)

{
    int count;
    scanf("%d %d", &size, &count);
    int *arr = (int *)malloc(size * sizeof(int));
    for (int i = 0, num = 0; i < size; i++)
    {
        arr[i]  =  0;
    }
    generate(arr, 0, count);
    return 0;
}
