#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,p,sum(0),ways(0),subSumLeft(0),subSumRight(0);
    cin>>T;
    vector <int> A;
    for(int i=0;i<T;i++){
        cin>>p;
        A.push_back(p);
        sum+=p;
    }
    if(sum%3!=0){
        cout<<"0"<<endl;
        return 0;
    }
    sum/=3;
    for(int i=0;i<T;i++){
        subSumLeft+=A[i];
        if(subSumLeft==sum){
            for(int j=T-1;j>=i;j--){
                subSumRight+=A[j];
                if(subSumRight==sum && j-1>i){
                    ways++;
                }
            }

        }
    }
    cout<<ways<<endl;
    return 0;
}





