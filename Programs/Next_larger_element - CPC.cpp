#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,max,sum,p;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        vector <int> A;
        A.reserve(N);
        for(int j=0;j<N;j++){
            cin>>p;
            A.push_back(p);
        }
        for(int j=0; j<N-1; j++){
                for(int k=j+1;k<=N;k++){
                    if(k==N){
                        cout << "-1 ";
                        break;
                    }
                    if(A[j] < A[k]){
                        cout << A[k] << ' ';
                        break;
                    }
                }
            }
            cout << "-1\n";
        A.clear();
    }
}
