#include <stdio.h>
int main(){
	
	int n1,step=0;
	printf("please enter a number:");
	scanf("%d",&n1);
	while(n1!=1)
	{
		if(n1%2==0){
			n1=n1/2;	
		}
		else
			n1=(3*n1+1)/2;
		step++;
	}
	printf("this number callatz :%d",step);
	return 0;
} 
