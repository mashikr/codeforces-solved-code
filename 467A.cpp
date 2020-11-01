#include<iostream>
using namespace std;

int main()
{
    int n,i,val1,val2,cont=0;;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>val1>>val2;
        if((val2-val1)>=2)
            cont++;
    }
    cout<<cont<<endl;
    return 0;
}
