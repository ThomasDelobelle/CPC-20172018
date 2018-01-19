#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    string A;
    int T,M,N,z;
    cin>>A>>T;
    /*int B[A.length()];
    if(A[0]==A[1]) B[0]=1;
    else B[0]=0;
    cout<<B[0]<<" ";
    for(int i=1;i<A.length();i++){
        if(A[i]==A[i+1]) B[i]=B[i-1]+1;
        else B[i]=B[i-1];
        cout<<B[i]<<" ";
    }*/
    for(int i=0;i<T;i++){
        z=0;
        cin>>M>>N;
        for(int j=M;j<N;j++){
            if(A[j-1]==A[j]) z++;
        }
        cout<<z<<endl;
    }
}
