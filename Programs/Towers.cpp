#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int N,maxHeight,numTowers,currentHeight,currentLength,p;
        cin>>N;
        vector <int> A;
        A.reserve(N);
        for(int j=0;j<N;j++){
            cin>>p;
            A.push_back(p);
        }

        sort(A.begin(),A.end());

        maxHeight = numTowers = currentHeight = 1;
        currentLength = A[0];
        for(int j=1; j<N; j++){
            if(A[j] == currentLength){
                currentHeight++;
                if(currentHeight > maxHeight) maxHeight = currentHeight;
            }else{
                numTowers++;
                currentHeight = 1;
                currentLength = A[j];
            }
        }

        cout<<maxHeight<<' '<<numTowers;

        A.clear();
}

