#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,N,C,U,p,q,r;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        cin>>U;
        vector<int> A;
        A.reserve(N);
        for(int j=0;j<N;j++) A[j]=0;
        for(int j=0;j<U;j++){
        scanf("%u%d%d", &p, &q, &r);
            for(int k=p;k<=q;k++){
                A[k]+=r;
            }
        }
        cin>>C;
        for(int j=0;j<C;j++){
            cin>>p;
            cout<<A[p]<<endl;
        }
    }
    return 0;
}
