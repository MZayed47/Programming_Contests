#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a[100000];
        cin>>a[i];
        sort(a,a+i+1);

        double x;
        x = double(a[i]) / double(a[0]);
        printf("Case %d: %.2lf",i+1,x);

        cout<<endl;
    }
}
