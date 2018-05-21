#include<stdio.h>
#include<string.h>
int isAnagram(char* s, char* t) {
	int i,j=0;
	int s1[26]={0};
	int s2[26]={0};
	for(i=0;s[i]!='\0';i++){
		s1[s[i]-97]++;
		s2[t[i]-97]++;
	}
//	for(i=0;t[i]!='\0';i++){
//		s2[t[i]-97]++;
//	}
	for(i=0;i<26;i++) {
		if(s1[i]!=s2[i]){
			return 0;
		}
	}
	if(i==26){
		return 1;	
	}
	return 0;
}
int main(){
	char *s="nagram";
	char *t="nagaram";
	int n=isAnagram(s,t);
	printf("%d\n",n);
} 
