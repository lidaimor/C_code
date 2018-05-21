#include<stdio.h>
void rotate(int* nums, int numsSize, int k) {
	int i,j,p;
    while(k>0){
    	p=nums[numsSize-1];
//    	printf("p:%d\n",p);
    	for(j=numsSize-1;j>0;j--){
    		nums[j]=nums[j-1];
//    		printf("nums[p]:%d\n",nums[j]);
		}	
		nums[0]=p;
//		printf("nums[0]:%d\n",nums[0]);
		k--;
	}	
	for(i=0;i<7;i++){
		printf("%d",nums[i]);
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int i;
	rotate(arr,7,3);
//	for(i=0;i<7;i++){
//		printf("%d",arr[i]);
//	}
} 
