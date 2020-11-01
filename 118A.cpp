#include<iostream>
using namespace std;

int main()
{
    string str;
    char a;
    cin>>str;
    int l=str.length();
    //char ch[l];
    for(int i=0;i<l;i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'||str[i]=='Y'||str[i]=='y')
        {

        }
        else{
            if(str[i]>'A' && str[i]<='Z')
             a=str[i]+32;
             else
                a=str[i];
             cout<<"."<<a;
        }
    }
    cout<<endl;
    return 0;
}

