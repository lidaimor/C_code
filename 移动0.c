#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int i,j,n;
    n=0;
    for(i=0;i<numsSize;i++){
    	if(nums[i]==0){
    		n++;
    		for(j=i;j<numsSize-n;j++){
    			nums[j]=nums[j+1];
    			nums[j+1]=0;
			}
//    		nums[numsSize]=0;
    		if(nums[i]==0){
    			i--;
			}
			if(numsSize-i==n){
				break;
			}
		}
	}
	for(i=0;i<numsSize;i++){
		printf("nums[%d]:%d\n",i,nums[i]);
	}
}
int main(){
	int arr[]={4,2,4,0,0,3,0,5,1,0};
	moveZeroes(arr,10);
} 
