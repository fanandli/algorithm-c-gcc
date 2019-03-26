#include<stdio.h>
int main(){
    int row,col,n;
    char s;
    scanf("%d %c",&n,&s);//

    if(n%2==0){
        row=n/2;//hang
        col=n;//lie
    }
    else{
        row=n/2+1;
        col=n;
    }

    for(int i=0;i<col;i++)
    {
        printf("%c",s);
    } 
    printf("\n");

    for(int i=2;i<row;i++){
        printf("%c",s);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
        printf("%c\n",s);//要带\n,注意
    }    
    for(int i=0;i<col;i++)
        printf("%c",s);
    return 0;
}