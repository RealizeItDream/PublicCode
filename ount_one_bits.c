#include<stdio.h>

int count_one_bits(unsigned int value)   
{
	int j=0;
	int a,i;
	for(i=0;i<32;i++)
	{
		  a=value&1;
	    value>>=1;
	    if(a==1)
			j++;
	}
	return j;
}

int main()
{
  int c;
	printf("请输入一个十进制数：");
	scanf("%d",&c);
	printf("转化为二进制数后1的位数有%d位\n",count_one_bits(c));
	return 0;
}
