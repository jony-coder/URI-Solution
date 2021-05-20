#include<bits/stdc++.h>

using namespace std;
int main(){

  double result;
  int count = 0;
  double num1, num2, avg;

  double n;
  while(1){

    cin>>n;
    if(n>10.0 || n<0){
        cout<<"nota invalida"<<endl;
    }

    else{
        count++;
        if(count==1){
        num1 = n;
    }
        if(count==2){
        num2 = n;
        break;
    }
    }


  }


    result = num1+num2;

    avg = result/2;
    printf("media = %.2lf\n", avg);


return 0;
}
