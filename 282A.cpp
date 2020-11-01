#include<iostream>
using namespace std;

int main()
{
    string str;
    int n,cont=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="X++" || str=="++X")
            cont++;
        else if(str=="X--" || str=="--X")
            cont--;
    }
    cout<<cont<<endl;

    return 0;
}



