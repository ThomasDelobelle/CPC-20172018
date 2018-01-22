#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,p,result;
    cin>>T;
    vector <int> A;
    for(int i=0;i<T;i++){
        cin>>p;
        A.push_back(p);
    }
    result=A[0];
    for(int i=1;i<A.size();i++){
        result+=abs(A[i]-A[i-1]);
    }
    cout<<result<<endl;
    return 0;
}












