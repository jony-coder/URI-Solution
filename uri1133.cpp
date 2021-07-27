#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,x,y; cin>>a>>b;

    if(a<b){
        x=a;
        y=b;
    }
    else{
        x=b;
        y=a;
    }

    for(int i=x+1; i<y; i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }

    }

return 0;
}
