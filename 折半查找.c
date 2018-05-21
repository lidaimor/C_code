#include<stdio.h>
int insertItemLoc(int arr[],int len, int value){  
    int low = 0,high = len-1,mid;  
    while (low <= high) {  
        mid = (low + high)/2;  
        if (value > arr[mid]) {  
            low = mid+1;  
        }else if (value < arr[mid]){  
            high = mid - 1; 
        }else{  
            return mid;
        }  
    }
    
}  
int main(){
	int arr[]={3,5};
	int p;
	p=insertItemLoc(arr,2,6);
	printf("%d",p);
}
