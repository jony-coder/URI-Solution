#include<bits/stdc++.h>
using namespace std;


int main(){

  long long int arr[60];
  arr[0]=0;
  arr[1]=1;

  for(int i=2; i<=60; i++){

    arr[i] = arr[i-1]+arr[i-2];


  }
  int T;
  cin>>T;
  int n;
  for(int i=0; i<T; i++){

    cin>>n;

    printf("Fib(%d) = %lld\n",n, arr[n]);

  }




return 0;
}
