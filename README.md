#include<stdio.h>
int main()
{
	int a=10,b=20;
	a^=b;
	b^=a;
	a^=b;
	printf("a=%d,b=%d\n",a,b);

	int c=10,d=20;
	c+=d;
	d=c-d;
	c-=d;
	printf("c=%d,d=%d\n",c,d);

	int m=10,n=20;
	m*=n;
	n=m/n;
	m=m/n;
	printf("m=%d,n=%d\n",m,n);

	float p=10.1,q=20.2;
	p*=q;
	q=p/n;
	p=p/q;
	printf("p=%f,q=%f\n",p,q);

	return 0;
}
