#include<stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
//	int i;
    if(digits[digitsSize-1]==9){
    	digits[digitsSize-1]=0;
		digits[digitsSize-2]++;
	}else{		
   		digits[digitsSize-1]++;		
	}
	return digits;
}
int main(){
	int arr[]={1,2,3,4,5,9};
	int i;
	int size=6;
	plusOne()
	for(i=0;i<6;i++){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	return 0;
} 
