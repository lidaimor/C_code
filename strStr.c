#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) {
	int i,k,j;
 	if(strlen(needle)==0){
 		return 0;
	 }
	for(i=0;haystack[i]!='\0';++i){
		for(j=i,k=0;needle[k]!='\0'&&haystack[j]==needle[k];j++,k++){
			;
		}
		if(k>0&&needle[k]=='\0')
			return i;
	}
	 return -1;
}
int main(){
	char *s1="a";
	char *s2="a";
	int n=strStr(s1,s2);
	printf("%d",n);
	return 0;
}
