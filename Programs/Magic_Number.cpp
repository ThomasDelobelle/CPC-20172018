#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    string A;
    cin>>A;
    bool MagicNumber,tmp;
    for(int i=0;i<A.length();i++){
        tmp=false;
        if(A[i]=='1'){
            tmp=true;
            if(i != A.length()-1 && A[i+1]=='4'){
                if(i != A.length()-2 && A[i+2]=='4') i++;
                i++;
            }
        }
        if(!tmp){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}







