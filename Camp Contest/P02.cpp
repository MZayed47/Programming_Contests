#include<bits/stdc++.h>
using namespace std;

long long int BPM(int b,int p,int m)
{
    long long int x = pow(b,p);
    long long int y = x%m;
    if(p==0){
        printf("%d",1%m);
    }
    else if(p%2==0)
    {
        printf("%d",BPM(b,p/2,m)*BPM(b,p/2,m));
    }
    else if(p%2!=0)
    {
        printf("%d",(b%m)*BPM(b,p/2,m)*BPM(b,p/2,m));
    }
}

int main()
{
    while(1)
    {
        long long int b,p,m;
        cin>>b>>p>>m;


    }
    return 0;
}
