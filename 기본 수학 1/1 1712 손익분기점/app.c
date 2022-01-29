#include <stdio.h>
// a =고정비용, b = 가변비용(인건비 등) , c  판매비용

void totalCost(int fixedCost, int variableCost, int sellingCost);
void calcCost(int totalCost, int variableCost, int sellingCost);
int controller = 1;
int sales = 0;

int main(void)
{

    int fixedCost = 0, variableCost = 0, sellingCost = 0;

    scanf("%d %d %d", &fixedCost, &variableCost, &sellingCost);
    totalCost(fixedCost, variableCost, sellingCost);

    return 0;
}

void totalCost(int fixedCost, int variableCost, int sellingCost)
{
    int total_cost = fixedCost + variableCost;
    if (variableCost > sellingCost)
    {
        // printf("손익분기점이 존재하지 않음 \n");
        printf("-1\n");
    }
    else if (total_cost > sellingCost)
    {
        calcCost(total_cost, variableCost, sellingCost);
    }
}

void calcCost(int totalCost, int variableCost, int sellingCost)
{
    int sel = sellingCost;
    while (controller)
    {
        if (totalCost >= sellingCost)
        {
            // printf("[%d]번째 판매 ,  비용및 수입(%d, %d) \n\n", sales + 1, totalCost, sellingCost);
            totalCost += variableCost;
            sellingCost += sel;
            sales++;
        }
        else if (totalCost < sellingCost)
        {
            // printf("비용보다 수입이 더많음 (%d, %d)  \n\n", totalCost, sellingCost);
            sales++;
            break;
        }
    }

    // printf("최초로 이익이 발생하는 판매량:  %d\n", sales);
    printf("%d\n", sales);
}