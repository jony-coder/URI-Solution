#include <bits/stdc++.h>
using namespace std;
int main(){

    int T; cin>>T;
    int n;
    int counter = 0;
    for(int i=0; i<5; i++){

        cin>>n;
        if(n==T){
            counter++;
        }


    }
    cout<<counter<<endl;




    return 0;
}
