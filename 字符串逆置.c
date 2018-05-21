#include<stdio.h>
#include<string.h>
int main(){
	char s[]="hello";
	*s=strrev(s);
	puts(s);
//	int l=strlen(s); 
//	int i,j,t;
//	char arr[10000];
//	for(i=0;i<l;i++){
//		arr[i]=*(s++);
//	}
//	for(i=0,j=l-1;i<j;i++,j--){
//		t=arr[i];
//		arr[i]=arr[j];
//		arr[j]=t;
//	}
//	for(i=0;i<l;i++){
//		printf("%d",arr[i]);
//	}
} 
