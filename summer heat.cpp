#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;

    while(T--){

        int xa,xb,Xa,Xb;
        cin>>xa>>xb>>Xa>>Xb;
        int a,b;
        if(Xa % xa != 0){
            a = abs(Xa/xa);
            a++;
        }else{
            a = Xa/xa;
        }
        if(Xb % xb != 0){
            b = abs(Xb/xb);
            b++;
        }else{
            b = Xb/xb;
        }
        cout<<a+b<<endl;
    }
    return 0;
}
