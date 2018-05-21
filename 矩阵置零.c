#include<stdio.h>
//void setZeroes(int** matrix, int matrixRowSize, int matrixColSize) {
	
//}
int main(){
	int matrix[3][4]={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
	int matrixRowSize=3;
    int matrixColSize=4;
// 	setZeroes((int**)matrix,3,4);
	int i,j,k,p;
	for(i=0;i<matrixRowSize;i++){
    	for(j=0;j<matrixColSize;j++){
    		if(matrix[i][j]==0){
    			matrix[i][j]=-1;
    			for(k=0;k<matrixColSize;k++){
    				if(matrix[i][k]==0)  	matrix[i][k]=0;
					else	matrix[i][k]=-1;
				}
				for(p=0;p<matrixRowSize;p++){
					if(matrix[p][j]==0)		matrix[p][j]=0;
					else	matrix[p][j]=-1;
				}
			}
		}
	}
	for(i=0;i<matrixRowSize;i++){
		for(j=0;j<matrixColSize;j++){
			if(matrix[i][j]==-1)	matrix[i][j]=0;
		}
	}
	for(i=0;i<matrixRowSize;i++){
		for(j=0;j<matrixColSize;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
