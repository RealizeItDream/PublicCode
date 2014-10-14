#include <stdio.h>
#include <malloc.h>

void main()
{
	int len=0,i=0,m=0,n=0,t=0;
	printf("请输入你要统计的字符串的长度: ");
	scanf("%d", &len);
	char * pArr= (char *)malloc(len); 
	printf("请输入这组字符串: ");

	for (i=0; i<len; i++)	
	{
		scanf("%c", &pArr[i]);
		if(pArr[i]=='.')
			break;
	}

	printf("你输入的这组字符串是:");
	for (i=0; i<len+1; ++i)
	{
		printf("%c", pArr[i]);
	}	
	printf("\n");

	for (i=0; i<len; i++)
	{
		 if(pArr[i]>= 'A' && pArr[i]<= 'Z')
		 {
			 m++;//大写的字母个数统计
		 }
		 else if(pArr[i]>= 'a' && pArr[i]<= 'z')
			 n++;//小写字母个数统计
	}	
	free(pArr); //释放掉动态分配的数组
	printf("其中大写字母有:%d\n小写字母有:%d\n",m,n);	
}

