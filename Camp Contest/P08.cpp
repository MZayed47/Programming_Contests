#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--){
        c++;
        int a[50],b[50],n,i,j,temp;
        cin>>n;
        int count=0;
        for(i=0; i<n; ++i){
            cin>>a[i];
        }
        for(i=0; i<n; ++i){
            b[i]=a[i];
        }

        sort(b,b+n);

        for(i=0; i<n; ++i){
            cout<<b[i]<<endl;
        }

        for(i=0; i<n; ++i){
            for(j=0; j<n; j++){
                if(a[j]=b[n-i-1]){
                    a[j]=a[n-i-1];
                    count++;
                }
            }
        }
        printf("Case %d: %d",c,count);
    }
    return 0;
}
