#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,p;
    cin>>T;
    vector<int> partSum;
    vector<int> M;
    for(int i=0;i<T;i++){
        cin>>p;
        M.push_back(p);
        partSum.push_back(p);
        if(i!=0) partSum[i]+=partSum[i-1];
    }
    float midSum = (float)partSum[T-1]/2;
    for(int i = 0; i < T; i++){
        if(partSum[i]>midSum){
            float a = midSum-partSum[i-1];
            float b = midSum-partSum[i];
            a = a<0?-a:a;
            b = b<0?-b:b;
            if(a>=b)
                cout<<i+1<<" "<<T-i-1<<endl;
            else
                cout<<i<<" "<<T-i<<endl;
            break;
        }
    }
}
