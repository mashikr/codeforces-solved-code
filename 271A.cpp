#include<iostream>
using namespace std;

int main()
{
    int a,i,k=0;
    string x;
    cin>>a;
    i=a+1;
    while(1){
        x=to_string(i);
        k=0;
        for(int m=0; m<3; m++){
           for(int n=m+1; n<4; n++){
            if(x[m]==x[n])
                break;
            else
                k++;
           }
           if(k==6)
            break;
        }
        if(k==6)
            break;
        i++;
    }

    cout<<x<<endl;

    return 0;
}
