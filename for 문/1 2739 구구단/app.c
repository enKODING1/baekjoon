#include <stdio.h>

void sum(int num,int num2);

int main(void){
    int loop = 0;
    int num=0,num2=0;
    scanf("%d",&loop);

    for(int i=0; i<loop;i++){
       scanf("%d %d",&num,&num2);
       sum(num,num2);
    }
    
   
    return 0;
    
}

void sum(int num,int num2){
    printf("%d",num+num2);
}