#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	printf("請輸入科目總數(X):");
	scanf("%d",&x);
	int i;
	int y;
	int sum=0;
	for(i=0;i<x;i++)
	{
		printf("請輸入科目%d:",i+1);
		scanf("%d",&y);
		sum=sum+y;
	}//總分計算區域 
	printf("總分為:%d\n",sum);
	int ave;
	ave=sum/x;//計算平均分數 
	printf("平均分數為:%d",ave);
	return 0;
}