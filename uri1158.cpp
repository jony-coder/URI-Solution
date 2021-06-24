#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;

    for(int i=0; i<T; i++){
        int sum=0;
        int x,y;
        cin>>x>>y;
        if(x%2==0){
            x=x+1;
        }
        for(int i=x; i<x+(y*2); i++){

            if(i%2!=0){
                sum = sum + i;
            }

        }

        cout<<sum<<endl;

    }


return 0;
}
