#include<bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cin>>n;

    if(isupper(n)){
        cout<<1<<endl;
    }
    else if(islower(n)){
        cout<<0<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
