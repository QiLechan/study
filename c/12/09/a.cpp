#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Friend
{
    char name[10];
    int year;
    int month;
    int day;
};

int main()
{
    struct Friend set[10];
    printf("请输入朋友数目：\n")
    int n;
    scanf("%d", &n);
    printf("请输入每个朋友的详细信息：\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf_s("%s %d %d %d", set[i].name,sizeof(set[i].name), &set[i].year, &set[i].month, &set[i].day);
    }
}
