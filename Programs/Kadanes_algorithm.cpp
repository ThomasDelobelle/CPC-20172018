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
        max = sum = A[0];
        for(int j=1; j<N; j++){
            if(sum > 0)
                sum += A[j];
            else
                sum = A[j];
            if(sum > max) max = sum;
        }
        cout<<max<<endl;
        A.clear();
    }
}
