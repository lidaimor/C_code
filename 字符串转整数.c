#include<stdio.h>
#include<math.h>
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
int myAtoi(char* str) {
    int i,flag,k=0;
    long long sum=0;
    i=flag=0;
    int max=2147483647;
    int min=-2147483647-1; 
    while(str[i]!='\0'){
    	if(str[i]=='-'||str[i]=='+'){
    		flag=str[i]=='-'? 1 : 0;
    		if(str[i+1]<'0'||str[i+1]>'9'){
				return 0;
			}else{
	    		i++;
	    		continue;
			}
		}
		if(str[i]>='0' &&str[i]<='9'){
			while(str[i]>='0' &&str[i]<='9'){
                if(sum>max/10||(sum == max / 10 && str[i] - '0' > 7)){
                    return (flag==1?min:max);
                }
				sum=sum*10+str[i]-48;
				i++;
			}
			break;
		}else if(str[i]==32){
			;
		}else{
			if(i>=1){
				if(flag) sum=-sum;
				return sum;
			}else{
				return 0;
			}
		}
		i++;
	}
	if(flag) sum=-sum;
	return (int)sum;
}
int main(){
	char a[]="+     1";
	int n=myAtoi(a);
	printf("%d\n",n); 
}
