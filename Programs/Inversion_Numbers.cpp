#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,p,tmp(0);

    cin.ignore();
    string blank;
    vector<int> a;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        tmp=0;
        for(int j=0;j<N;j++){
            cin>>p;
            a.push_back(p);
        }
        for(int j=0;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if(a[j]>a[k]) tmp++;
            }
        }
        cout<<tmp<<endl;
        a.clear();
    }
}
