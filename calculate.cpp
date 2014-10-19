/*
  计算1-1/2+1/3-1/4+1/5-……+1/99-1/100的值
*/
#include<stdio.h>
int main()
{
	/*可以求到任意整数n
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	*/

    int i=1;
    double sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)   //判断是否是偶数
           sum-=1.0/i;
        else
           sum+=1.0/i;
    }
    printf("sum=%f\n",sum);
    return 0;
}
