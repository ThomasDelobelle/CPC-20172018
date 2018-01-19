#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,k,max,p;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        cin>>k;
        vector <int> A;
        A.reserve(N);
        for(int j=0;j<N;j++){
            cin>>p;
            A.push_back(p);
        }
        for(int j=0; j<N-k+1; j++){
            max=-1;
            for(int l=j;l<j+k;l++){
                if(max < A[l]) max = A[l];
            }
            cout << max << ' ';
        }
        cout<<endl;
        A.clear();
    }
}
