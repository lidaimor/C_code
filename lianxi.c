#include<stdio.h>
#include<string.h>
int strStr(char *s,char *t){
	int i,j,k;
	for(i=0;s[i]!='\0';i++){
		for(j=i;t[j]!='\0'&&s[j]==t[j];i++,j++){
			;
		}
		if(j>0&&t[j]=='\0'){
			return i;
		}
	}
	return -1;
}
int main(){
	char *s="hello";
	char *t="ll";
	int n=strStr(s,t);
	printf("%d",n);
	return 0;
}
