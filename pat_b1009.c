#include<stdio.h>
#include<string.h>
int main(){
    char str[90];
    gets(str);
    char ans[90][90];
    len=strlen(str);
    int r,h=0;

    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            ans[r][h++]=str[i];
        }else{
            ans[r][h]='\0';
            r++;
            h=0;
        }
    }
    for(int i=r;i>=0;i--){
        printf("%s",ans[i]);
        if(i>0) printf(" ");
    }
    return 0;

}