#include<stdio.h>
int containsDuplicate(int* nums, int numsSize) {
    int i,j;
	for(i=0;i<numsSize;i++){
		for(j=i+1;j<numsSize;j++){
			if(nums[i]==nums[j]){
				return 1;	
			}
		}	
	}
	return 0;
}
int main(){
	int arr[]={1,2,3,4,5,6,1};
	int p=containsDuplicate(arr,7);
	printf("%d",p);
}
