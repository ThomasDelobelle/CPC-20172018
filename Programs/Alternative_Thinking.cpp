#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,p,max(1),tmp(1),tmp1;
    string a;
    vector <int> A;
    vector <int> B;
    cin>>T>>a;
    B.reserve(T);
    for(int i=0;i<T;i++){
        A.push_back((int)a[i]);
    }
    for(int i=0;i<T;i++){
        for(int j=1;j<T;j++){
            tmp=1;
            for(int k=0;k<T;k++){
                if(k>=i && k<=j) (A[k]==1)?B[k]=0:B[k]=1;
                else B[k]=A[k];
            }
            tmp1=B[0];
            for(int k=1;k<T;k++){
                if(tmp1!=B[k]){
                    tmp++;
                    tmp1=B[k];
                }

            }
            if(tmp>max) max=tmp;
        }
    }
    cout<<max<<endl;
    return 0;
}
