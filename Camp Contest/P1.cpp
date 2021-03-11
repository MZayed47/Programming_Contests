#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        count++;
        int n, reverse=0, rem,temp;
        scanf("%d",&n);

        temp=n;
        while(temp!=0){
            rem=temp%10;
            reverse=reverse*10+rem;
            temp/=10;
        }
        if(reverse==n){
            printf("Case %d: Yes\n",count);
        }
        else{
            printf("Case %d: No\n",count);
        }

    }
    return 0;
}
