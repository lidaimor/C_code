#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) {
    int i,j,k,m,n;
    if(strlen(needle)==0){
 		return 0;
	 }
	 if(strlen(haystack)==1&&strlen(needle)==1){
	 	if(needle[0]==haystack[0]){
	 		return 0;
		 }
	 }
    m=strlen(haystack)-1;
    n=strlen(needle)-1;
    for(i=m;i>0;i--){
        for(j=i,k=n;k>0 && haystack[j]==needle[k];j--,k--)
            ;
        if(k==0)
            return i-n;
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
