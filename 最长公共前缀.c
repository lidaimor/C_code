#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j=0,k=0;
    char arr[strsSize];
    if(strsSize==0){ 
		return "";
	}else if(strsSize==1) { 
		return strs;
	}else{
		int min=strlen(strs[0]);
		for(i=1;i<strsSize;i++){
	    	if(strlen(strs[i])<min)
	    		min==strlen(strs[i]);
		}
		for(i=0;i<min;i++){
			for(j=0;j<strsSize;){
				if(strs[j][i]==strs[0][i]){
					j++;
				}else{
					return arr;
				}
			}
			arr[k++]=strs[0][i];
//			printf("%s\n",arr);
		}
		arr[k]='\0';
		printf("%s\n",arr);
	}
	return arr;
}
int main(){
	char *a[3]={"flower","flow","flight"};
	char *s[3];
	strcat(s,longestCommonPrefix(a,3));
	printf("%s\n",s);
}
