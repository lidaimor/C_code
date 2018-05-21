#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int firstUniqChar(char* s) {
    int i,j,l;
    int flag=1;
    l=strlen(s);
    char *arr=NULL;
    arr=(char *)malloc(sizeof(char)*l);
    for(i=0;i<l;i++){
    	arr[i]=*(s++);
	}
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if (i == j)
            continue;	
			if(arr[i]==arr[j]){
				flag=0;
				break;
			}else{
				flag=1;
			}
		}
		if(flag==1){
			return i;
		}
	}
    return -1;
}
int main(){
	char *s="a";
	int n=firstUniqChar(s);
	printf("%d",n);
	return 0;
}
