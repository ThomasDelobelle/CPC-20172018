#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    string A;
    int T,M,N,z;
    cin>>A>>T;
    for(int i=0;i<T;i++){
        z=0;
        cin>>M>>N;
        for(int j=M;j<N;j++){
            if(A[j-1]==A[j]) z++;
        }
        cout<<z<<endl;
    }
}
