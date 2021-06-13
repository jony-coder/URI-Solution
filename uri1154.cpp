#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    float avg=0;
    int counter = 0;
    int sum = 0;
    while(1){

        cin>>n;
        if(n<0){
            break;
        }
        else{
         sum = sum + n;
         counter++;
        }
    }
    avg = (float)sum/counter;
    printf("%.2f\n", avg);


return 0;
}
