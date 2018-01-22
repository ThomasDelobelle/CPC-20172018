#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,p,tmp;
    vector <int> A;
    vector< vector<int> > B;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>p;
        A.push_back(p);
        cin>>p;
        A.push_back(p);
        B.push_back(A);
        A.clear();
    }
    for(int i=0;i<T;i++){
        tmp=0;
        for(int j=0;j<T;j++){
            if(i!=j){
                if(B[i][0]<=B[j][0] && B[i][1]>=B[j][1]) tmp++;
            }
        }
        cout<<tmp<<endl;
    }
    return 0;
}







