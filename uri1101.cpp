#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
    int x,y;
    int temp=0, sum=0;
    cin>>x>>y;

      if(x<=0 || y<=0){
            break;
        }

       else{
    if(x>y){
        temp = x;
        x=y;
        y=temp;
    }

    for(int i=x; i<=y; i++){
            sum = sum + i;
            printf("%d ", i);


    }
    printf("Sum=%d\n", sum);

}

}


return 0;
}
