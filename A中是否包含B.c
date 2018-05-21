#include<stdio.h>
#include<string.h>
int main(){
	char *a="hello";
	char *b="oooo";
	int i,j,k;
	if(strlen(a)==0||strlen(b)==0||strlen(a)<strlen(b)){
		printf("false");
	}else{
		for(i=0;b[i]!='\0';){
			for(j=0;a[j]!='\0';){
				if(b[i]==a[j]){
					i++;
					j=0;
				}else{
					j++;
				}
			}
			if(a[j]=='\0'&&b[i]!='\0'){
				printf("false");
				break;
			}
		}
		if(b[i]=='\0'){
			printf("true");
		}
	}
}
