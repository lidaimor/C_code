#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isPalindrome(char* s) {
    int i,j,l,k;
	l=strlen(s);
	if(s==NULL||l==1){
		return 1;
	}
    char *arr=NULL;
	i=0;
	k=0;
	while(i<l){
		if((s[i]>='0' && s[i]<='9') || (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
			k++;
		}
		i++;
	}
	arr=(char *)malloc(k*sizeof(char));
	i=0;
	j=0;
	while(i<l){
		if((s[i]>='0' && s[i]<='9') || (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
			arr[j++]=s[i];
		}
		i++;
	}
	arr[j]='\0';
	for(i=0,j=k-1;i<j;i++,j--){
		if(arr[i]!=arr[j]){
			if(arr[i]-32==arr[j]||arr[j]-32==arr[i]){
				continue;
			}else{
				return 0;
			}
		}
	}
//	free(arr);
	return 1;
}
int main(){
	char *s="A man, a plan, a canal: Panama";
	int n=isPalindrome(s);
	printf("%d",n);
} 
