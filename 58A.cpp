#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    b="zzzzz";
    int z=a.size();

    for(int i=0; i<z; i++){
        if(a[i]=='h'){
            b[0]='h';
            for(int j=i+1; j<z; j++){
                if(a[j]=='e'){
                   b[1]='e';
                   for(int k=j+1; k<z; k++){
                    if(a[k]=='l'){
                        b[2]='l';
                        for(int l=k+1; l<z; l++){
                            if(a[l]=='l'){
                                b[3]='l';
                                for(int m=l+1; m<z; m++){
                                    if(a[m]=='o'){
                                        b[4]='o';
                                        break;
                                    }
                                }
                                break;
                            }

                        }
                        break;
                    }

                   }
               break;
                }
            }
            break;
        }
    }

    if(b=="hello")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
