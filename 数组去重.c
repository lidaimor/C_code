#include<stdio.h>
int main(){
	int i,j,k;
	int n=12;
	int arr[]={1,1,2,2,2,3,3,4,4,4,4,5};
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				j--;
				n--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);	
	}
}
