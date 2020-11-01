#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   double n,m,a,x,y;
   cin>>n>>m>>a;

   x=ceil(n/a);
   y=ceil(m/a);
    long long z;
    z=x*y;
   cout<<z<<endl;

   return 0;
}
