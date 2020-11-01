#include<iostream>
using namespace std;

int main()
{
    int n,val,i,e=0,o=0,ep,op;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>val;
        if(val%2==0){
           e++;
           ep=i;
        }
        else{
            o++;
            op=i;
        }
    }
    if(e==1) cout<<ep<<endl;
    else cout<<op<<endl;

    return 0;
}


