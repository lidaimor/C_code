#include<stdio.h>
#include<string.h>
int main(){
	int a[4][4]={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	int i,j,k;
	int x=7;
	int col=3,row=0;
	if(col>=0&&row>=0){
		while(row<4&&col>=0){
			if(a[row][col]==x){
				printf("%d",a[row][col]);
				break;
			}else if(a[row][col]>x){
				--col;
			}else{
				++row;
			}
		}
	}
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	} 
} 
