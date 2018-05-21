#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
	int i,j;
	if(numsSize==1){
		return nums[numsSize-1];
	}else{
	    for(i=0;i<numsSize;i++){
	    	for(j=0;j<numsSize&&(j-i);j++){
	    		if(nums[i]==nums[j]){
	    			break;
				}
			}
			if(j==numsSize){
				return nums[i];
			}
		}	
	}
	return 0;
}
int main(){
	int arr[]={2,2,1};
	int k;
	k=singleNumber(arr,3);
	printf("%d",k);
}
