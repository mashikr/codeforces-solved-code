#include<iostream>
using namespace std;

int main()
{
    int n,i,j,x,y;
    cin>>n;
    int arr[n][2];
    for(i=0; i<n; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    y = x = arr[0][0]+arr[0][1];

    for(i=1; i<n; i++){
       x=(x-arr[i][0])+arr[i][1];
       if(x>y)
        y=x;
    }

    cout<<y<<endl;

    return 0;
}
