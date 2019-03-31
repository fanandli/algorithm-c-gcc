#include<stdio.h>
struct Student
{
    char name[15];
    char id[15];
    char sex;
    int score;
}temp,maxf,minm;

int main(){
    minm.score=101;
    // studentm.sex='m';
    maxf.score=-1;
    // studentf.sex='f';
    int n;
    scanf("%d",&n);  
    for(int i=0;i<n;i++){
        scanf("%s %c %s %d",temp.name,&temp.sex,temp.id,&temp.score);
        if(temp.sex=='f'&&temp.score>maxf.score){
            maxf=temp;
        }else if(temp.sex=='m'&&temp.score<minm.score){
            minm=temp;
        }
    }

    if(maxf.score==-1){
        printf("absent\n");
    }else{
         printf("%s %s\n",maxf.name,maxf.id);
    }
    if(minm.score==101){
        printf("absent\n");
    }else{
        printf("%s %s\n",minm.name,minm.id);
    }
    if(maxf.score==-1||minm.score==101){
       printf("Na\n");
    }else{
        printf("%d",maxf.score-minm.score);
    }
    return 0; 
}

//与pat_b1004类似