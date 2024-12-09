#include <stdio.h>
 
int main() {
    int *arr[101];
    int num = 0;
    for (int i = 0; i < 100; i++)
    {
        *(arr + i) = &num;
    }
    return 0;
}