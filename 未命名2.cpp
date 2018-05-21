#include<stdio.h>
//using namespace std;
int main(void){
	const int a=5;
	int *p=(int *)(&a);
	*p=10;
//	cout<<"a="<<<*p=<<endl>
	printf("a=%d,*p=%d",a,*p);
	return 0;
} 
//</endl>
