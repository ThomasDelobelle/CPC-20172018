#include <iostream>
#include <vector>
using namespace std;

string A,B;

int LCS(int i, int j){
    if(i==0 || j==0) return 0;
    if(A[i]==A[j]) return LCS(i-1,j-1);
    else return max(LCS(i-1,j),LCS(i,j-1));
}

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,lenA,lenB;
    cin>>T;
    for(int i=0; i<T;i++){
        cin>>lenA>>lenB>>A>>B;
        int max = LCS(lenA,lenB);
        cout<<max<<endl;
    }
    return 0;
}
