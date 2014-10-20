/*
  求x的y次方,x和y从键盘输入，输出结果最后三位。
*/

#include<stdio.h>
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);

    int i; 
	int pow=1;
	for(i=1;i<=y;i++)
	{
		pow*=x;
	}

	int j;
    int a[3];
	for(j=0;j<3;j++)
	{	
		a[j]=pow%10;
		pow=pow/10;
	}

	int k=0;
	for(k=2;k>=0;k--)
	printf("%d",a[k]);
	printf("\n");
	return 0;
}
