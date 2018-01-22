#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,t(0),max(0),pos;
    string A,B,C;
    cin>>T>>A>>B;
    B=B+B;
    for(int i=0; i<T;(t==0)?i++:i+=t){
        t=0;
        if(B[i]==A[t]){
            t++;
            for(int j=i+1;j<T*2;j++){
                if(B[j]==A[t])
                    t++;
                else
                    break;
            }
            if(max<t){
                max=t;
                pos=i;
            }
        }
    }
    cout<<pos<<endl;
    return 0;
}

