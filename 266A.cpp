#include<iostream>
using namespace std;

int main()
{
    string st ;
    int cont= 0;
    int n;
    cin >>n >> st;
    for(int i = 1; i < n; i++ ){
        if(st[i]==st[i-1])
        cont++;
    }

    cout << cont << endl;
    return 0;
}
