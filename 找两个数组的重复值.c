#include<stdio.h>
void intersect(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i,j,k=0;
    int returnSize[100];
    for(i=0;i<nums1Size;i++){
    	for(j=0;j<nums2Size;j++){
    		if(nums1[i]==nums2[j]){
//    			k++;
//    			returnSize=(int *)malloc(k*sizeof(int));
    			returnSize[k]=nums1[i];
    			k++;
    			break;
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%d\n",returnSize[i]);
	}
//	return returnSize;
}
int main(){
	int nums1[]={1};
	int nums2[]={1};
	int *new;
	intersect(nums1,1,nums2,1);
}
