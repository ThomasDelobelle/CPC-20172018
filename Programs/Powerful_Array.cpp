#include <iostream>
#include <vector>
using namespace std;

bool checkVerif(vector<int> B,int a){
    for(int i=0; i<B.size(); i++){
        if(B[i]==a) return true;
    }
    return false;
}

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,N,p,q,sum,num;
    vector<int> A;
    vector<int> B;
    cin>>T>>N;
    for(int i=0;i<T;i++){
        cin>>p;
        A.push_back(p);
    }
    for(int i=0;i<N;i++){
        cin>>p>>q;
        sum=0;
        B.clear();
        for(int j=p-1;j<q;j++){
            num=0;
            if(!checkVerif(B,A[j])){
                B.push_back(A[j]);
                for(int k=j; k<q; k++){
                    if(A[k] == A[j]) num++;
                }
                sum += num*num*A[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
