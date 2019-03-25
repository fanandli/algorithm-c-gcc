#include <stdio.h>
int main(){
    int n,numz;
    int arr[200];
   
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("qingshuruyigezhi:");
    scanf("%d",&numz);
    int k;
    for(k=0;k<n;k++){
        if(arr[k]==numz){
            printf("%d",k);
            break; 
        }          
    } 
   
    if(k==n){
        printf("-1\n");
    }
    return 0;
}