#include<stdio.h>
int main(){
	int a[8]={2,3,5,1,0,7,9,4};
	int i,j,t1,t2;
//	for(i=0;i<8;i++){
//		if(a[i]%2){
//			t=a[i];
//			for(j=i;j>=0;j--){
//				a[j]=a[j-1];
//			}
//			a[0]=t;
//		}
//	}
	i=0;j=7;
	while(i<j){
		while(a[i]%2){
			t1=a[i];
			i++;
		}
	}
	for(i=0;i<8;i++){
		printf("%d\t",a[i]);
	}
}
