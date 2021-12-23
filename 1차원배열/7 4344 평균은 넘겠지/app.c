#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

typedef struct scoreData
{
    int data[MAX_SIZE];
    int count;
    int average;
} score;


double Average(score data)
{
    int check = 0;

    for(int i =0; i < data.count;i++){
        data.average += data.data[i];
    }
    data.average /= data.count;

    for(int j = 0 ; j < data.count; j++){
        if(data.data[j] > data.average){
           check++; 
        }
    }
     
    return (double)check/data.count * 100;
}

int main(void)
{
    int input_num = 0,input_num2 = 0;
    scanf("%d", &input_num);

    score *data = (score *)malloc(sizeof(score) * input_num);

    for (int i = 0; i < input_num; i++)
    {
        data[i].average = 0;
        data[i].count = 0;
        scanf("%d",&input_num2);
        data[i].count = input_num2;
        for (int j = 0; j < input_num2; j++)
        {
            scanf("%d",&data[i].data[j]);

        }
        printf("%.3f%%\n",Average(data[i]));
    }

    free(data);
    return 0;
}
