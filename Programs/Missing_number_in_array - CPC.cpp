#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,missing,p;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        vector <int> A;
        A.reserve(N);
        for(int j=0;j<N-1;j++){
            cin>>p;
            A.push_back(p);
        }
        missing = 0;
        for(int j=0; j<N-1; j++){
            missing += j+1;
            missing -= A[j];
        }
        missing += N;
        cout<<missing<<endl;
        A.clear();
    }
}
