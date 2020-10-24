#include <stdio.h>
int main()
{

    float number[6];
    int i, count = 0;
    float sum = 0.0;
    float avg = 0.0;
    for(i=0; i<6; i++)
    {
        scanf("%f", &number[i]);
        if(number[i]>=0)
        {
            sum=sum+number[i];
            count++;
        }
    }
    avg = sum/(float)count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", avg);


    return 0;
}
