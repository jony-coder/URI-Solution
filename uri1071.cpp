#include<bits/stdc++.h>
using namespace std;

int main(){

        int a,b;
        int x,y, sum = 0;
        cin>>a>>b;

        if(a>b){
            x=b;
            y=a;
        }
        else{
            x=a;
            y=b;
        }

        for(int i = x+1; i<y; i++){

            if(i%2!=0){
                sum = sum + i;
            }

        }

        cout<<sum<<endl;

return 0;
}
