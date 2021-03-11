#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long T,c;
    cin>>T;
    for(c=1; c<=T; c++){
        long long n,k,M,first=0,second=1,i,next;

        cin>>n>>k>>M;

        for(i=1; i<=n+2; i++){
            if(i<=1){
                next=i;
            }
            else{
                next= first + second;
                first = second;
                second = next;
            }
        }

        long long x = pow(k,next);
        long long y = x % M;

        cout<<"Case "<<c<<": "<<y<<endl;
    }
    return 0;
}
