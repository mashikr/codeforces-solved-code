#include<iostream>

using namespace std;

int main()
{
    int n,l,cont=0,i;
    string a;
    cin>>n;
    cin>>a;

    if(n<26) cout<<"NO"<<endl;
    else{
        char arr[26];
        for(i=0; i<26; i++) arr[i]=97+i;

        for(i=0; i<n; i++){
            if(a[i]>='A' && a[i]<='Z') a[i]=tolower(a[i]);

            if(arr[a[i]-97]==a[i]){
                arr[a[i]-97]='0';
                cont++;
            }
        }
        if(cont==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}



