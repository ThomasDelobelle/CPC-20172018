#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int tmp=0;
    string hello="hello",A;
    cin>>A;
    for(int i=0;i<A.length();i++)
        if(tmp<5 && A[i]==hello[tmp]) tmp++;
    (tmp==hello.length())?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}
