#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=0;
    char ch;
    scanf("%c",&ch);
    while(t--){
        c++;
        int count=0;
        string s;
        getline(cin,s);
        int l = s.length();
        for(int i=0; i<l; i++){
            if(s[i]==' ' || s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w'){
                count++;
            }
            else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x'){
                count = count+2;
            }
            else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y'){
                count = count+3;
            }
            else if(s[i]=='s' || s[i]=='z'){
                count = count+4;
            }
        }
        printf("Case #%d: %d\n",c,count);
    }
    return 0;
}

