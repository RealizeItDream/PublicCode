/*
  计算1到100的所有整数中9出现的次数
*/
#include<stdio.h> 
 
int  main() 
{ 
    int i=1;
	  int j=0;
	  for(i=1; i<=100; i++) 
	  { 
		    if((i/10==9)||(i%10==9))
			  j++;
	  } 
	  printf("数字9共出现%d次\n",j);
	  return 0;
}  
