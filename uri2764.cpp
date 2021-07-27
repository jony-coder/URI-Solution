#include<bits/stdc++.h>
using namespace std;

int main(){

    char d1,d2,m1,m2,y1,y2;
    char c1,c2;

    while(cin>>d1>>d2>>c1>>m1>>m2>>c2>>y1>>y2){
    printf("%c%c/%c%c/%c%c\n", m1,m2,d1,d2,y1,y2);
    printf("%c%c/%c%c/%c%c\n", y1,y2,m1,m2,d1,d2);
    printf("%c%c-%c%c-%c%c\n", d1,d2,m1,m2,y1,y2);
    }



return 0;
}
