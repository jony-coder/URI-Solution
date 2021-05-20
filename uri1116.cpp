#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    double x,y, result = 0;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x>>y;

        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
        result = x/y;
        printf("%.1lf\n", result);
        }
    }



return 0;
}
