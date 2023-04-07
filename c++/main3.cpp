#include<stdio.h>

int main(){
	double num;
	num = 2356567845;
	printf("%f\n",num);

	double a, b, c;
	a=5;
	b=3;
	c=(double)(a/b);
	printf("%f\n",c); 
	
	char str;
	str='A';
	printf("%d\n",str);
	printf("%c\n",str);
	str=str+1;
	printf("%d\n",str);
	printf("%c\n",str);

	int d,e,f,k;
	d=e=f=3;
	k=d+e*3-6/f;
	printf("혼합연산자의 결과= %d\n",k);
	
	return 0;
}
