#include<iostream>
using namespace std;

int main()
{
    int n,i,mis,chr,x=0,y=0,z;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>mis>>chr;
        if(mis>chr) x++;
        if(mis<chr) y++;

    }
    if(x>y){ cout<<"Mishka";}
    else if(x<y){ cout<<"Chris";}
    else {cout<<"Friendship is magic!^^";}

    return 0;
}
