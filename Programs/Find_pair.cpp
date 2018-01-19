
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

bool sort_comparator(const vector<int>& a, const vector<int>& b){
    if(a[0]<b[0])
        return true;
    if(a[0]>b[0])
        return false;
    if(a[1]<=b[1])
        return true;
    return false;
}

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,p;
    cin>>T;
    cin>>N;
    vector <int> A;
    vector <int> C;
    vector < vector <int> > B;
    for(int j=0;j<T;j++){
        cin>>p;
        A.push_back(p);
    }

    //sort(A.begin(),A.end());
    //cout<<A[floor((N-1)/T)]<<endl<<A[(N-1)%T]; //Only if there isn't duplicates
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A.size(); j++){
            C.push_back(A[i]);
            C.push_back(A[j]);
            B.push_back(C);
            C.clear();
        }
    }
    sort(B.begin(),B.end(),sort_comparator);
    cout<<endl<<B[N-1][0]<<' '<<B[N-1][1];
}
