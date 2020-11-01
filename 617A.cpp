#include<iostream>
using namespace std;

int main()
{
    int a,n;
    cin>>a;
    n=(a/5)+((a%5)/4)+(((a%5)%4)/3)+((((a%5)%4)%3)/2)+((((a%5)%4)%3)%2);
    cout<<n<<endl;

    return 0;
}
