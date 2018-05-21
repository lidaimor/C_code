#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int reverse(int x) {
    int flag=0;
    long long k=0; 
    if(x<0){
    	x=-x;
    	flag=1;
	}
	while(x>0){
		k=k*10+x%10; 
		x=x/10;
	} 
	if(k>INT_MAX)  return 0;
	if(flag)
		k=-k;
	return (int)k;
}
int main(){
	int x=1534236469;
	int n=reverse(x);
	printf("%d",n);
}
