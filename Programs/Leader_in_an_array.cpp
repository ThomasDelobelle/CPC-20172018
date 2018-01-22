#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,p;
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
            for(int k=j+1; k<N; k++){
                if(A[j]>A[k]){
                    if(k==N-1){
                        cout << A[j] << ' ';
                    }
                }else{
                    break;
                }
            }
        }
        cout<<A[N-1]<<endl;
        A.clear();
    }
}
