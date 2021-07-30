#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int two=0, three=0, four=0, five=0;
    for(int i=0, j=0; i<n; i++, j++){
        cin>>j;

        if(j%2==0){
            two++;
        }
        if(j%3==0){
            three++;
        }
        if(j%4==0){
            four++;
        }
        if(j%5==0){
            five++;
        }

    }
    printf("%d Multiplo(s) de 2\n", two);
    printf("%d Multiplo(s) de 3\n", three);
    printf("%d Multiplo(s) de 4\n", four);
    printf("%d Multiplo(s) de 5\n", five);


return 0;
}
