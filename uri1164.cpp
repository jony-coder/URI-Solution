#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N,x;
    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>x;
        int sum=0;

        for(int i=1; i<x; i++)
        {

            if(x%i==0)
            {
                sum = sum + i;
            }
        }

        if(sum==x)
        {
            printf("%d eh perfeito\n", x);
        }

        else
        {
            printf("%d nao eh perfeito\n", x);
        }
    }


    return 0;
}
