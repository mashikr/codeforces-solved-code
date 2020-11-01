#include<iostream>
using namespace std;

int main()
{
    int a,b,c,mx;
    int arr[6];
    cin>>a>>b>>c;

    mx=arr[0]=a+(b*c);
    arr[1]=a*(b+c);
    arr[2]=a*b*c;
    arr[3]=(a+b)*c;
    arr[4]=a+b+c;
    arr[5]=(a*b)+c;

    for(int i=1; i<6; i++){
        if(arr[i]>mx)
            mx=arr[i];
    }
    cout<<mx<<endl;
    return 0;
}
