#include<stdio.h>
#include<string.h>

struct student
{
	char name[100];
	int year;
	int month;
	int day;
};

void paixu(struct student a[], int len)
{
	int i, j;
	struct student temp;
	for (i = 0;i < len - 1;i++)
	{
		for (j = 0;j < len - i - 1;j++)
		{

			if ((a[j].month > a[j + 1].month) || (a[j].month == a[j + 1].month && a[j].day > a[j + 1].day))
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	struct student a[8];
	int i, n;
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
	{
        unsigned int len = 100;
		scanf_s("%s %d %d %d", a[i].name, len, &a[i].year, &a[i].month, &a[i].day);
	}
	paixu(a, n);
	for (i = 0;i < n;i++)
	{
		printf("%s %d %d %d\n", a[i].name, a[i].year, a[i].month, a[i].day);
	}
	return 0;
}