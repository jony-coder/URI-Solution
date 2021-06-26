
#include<bits/stdc++.h>
using namespace std;

int main(){




    while(true){

        int sum=0;
        int x,y;
        cin>>x;

        if(x==0){
            break;
        }
        if(x%2!=0){
            x=x+1;
        }
        for(int i=x; i<=x+8; i++){

            if(i%2==0){
                sum = sum + i;
            }

        }

        cout<<sum<<endl;

    }


return 0;
}
