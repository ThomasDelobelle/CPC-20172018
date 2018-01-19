#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,max1,max2,total,p;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        vector <int> A;
        A.reserve(N);
        for(int j=0;j<N;j++){
            cin>>p;
            A.push_back(p);
        }
        total = 0;
        for(int j=0; j<N; j++){
            max1 = -1;
            max2 = -1;
            for(int l=0; l<j; l++){
                if(A[l]>max1) max1 = A[l];
            }
            for(int l=j+1; l<N; l++){
                if(A[l]>max2) max2 = A[l];
            }
            total += max(min(max1,max2)-A[j],0);
        }
        cout << total << endl;
        A.clear();
    }
}

