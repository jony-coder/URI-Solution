#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int i, pos;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    int smaller = arr[0];
    int counter=0;

    for(i=0; i<n; i++)
    {

        if(smaller>arr[i])
        {
            smaller = arr[i];
            pos = i;

        }
    }


    printf("Menor valor: %d\n", smaller);
    printf("Posicao: %d\n",pos);




    return 0;
}
