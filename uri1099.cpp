#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;

    cin>>T;

    while(T--){
    int x,y;
    int temp=0, sum=0;
    cin>>x>>y;

    if(x>y){
        temp = x;
        x=y;
        y=temp;
    }

    for(int i=x+1; i<y; i++){

        if(i%2!=0){
            sum = sum + i;
        }

    }
    cout<<sum<<endl;

}


return 0;
}
