#include < stdio.h>
#include < stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;
struct student
{
	long int xuehao;
	char name[10];
	int score[3];
};
int main()
{
	struct student set[20];//�����ṹ������
	printf("����ѧ����Ŀ\n");
	int n;
	scanf_s("%d",&n);
	printf("����%d��ѧ��������Ϣ\n",n);
	int i ,j;
	for(i=0;i<n;i++)
	{
		scanf_s("%ld %s %d %d %d",&set[i].xuehao,set[i].name,sizeof(set[i].name),&set[i].score[0],&set[i].score[1],&set[i].score[2]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(set[i].score[0]+set[i].score[1]+set[i].score[2] < set[j].score[0]+set[j].score[1]+set[j].score[2] )
			{
				struct student temp=set[i];
				set[i]=set[j];
				set[j]=temp;
			}
		}
	}//for(i=0;i<n-1;i++)
	printf("��ʾ������\n");
	for(i=0;i<n;i++)
	{
		printf("%ld %s %d %d %d\n",set[i].xuehao,set[i].name,set[i].score[0],set[i].score[1],set[i].score[2]);
	}
	return 0;
}