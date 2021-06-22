#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum = 0;
    int x,y, temp;
    int a;
    cin>>x>>y;

    if(x>y){

        temp = x;
        x = y;
        y = temp;

    }

    for(int i=x; i<=y; i++){

        if(i%13!=0){
            sum = sum + i;
        }
    }


cout<<sum<<endl;

return 0;
}
