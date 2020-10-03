#include <stdio.h>
int main(){
    int value,hundrate,temp,temp1,fifty,temp2,twenty,temp3,ten,temp4,five,temp5,two,one;
    scanf("%d", &value);
    hundrate = value/100;
    temp1 = value%100;
    fifty = temp/50;
    temp2 = value%50;
    twenty = temp2/20;
    temp3 = value%20;
    ten = temp3/10;
    temp4 = value%10;
    five = temp4/5;
    temp5= value%5;
    two = temp5/2;
    one = two%2;

    printf("%d nota(s) de R$ 100,00\n",hundrate);
    printf("%d nota(s) de R$ 50,00\n",fifty);
    printf("%d nota(s) de R$ 20,00\n",twenty);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);


return 0;
}
