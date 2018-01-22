#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,N,W,p;
    vector <int> wt;
    vector <int> val;
    cin>>T;
    for(int i=0; i<T;i++){
        cin>>N>>W;
        for(int j=0; j<N; j++){
            cin>>p;
            val.push_back(p);
        }
        for(int j=0; j<N; j++){
            cin>>p;
            wt.push_back(p);
        }
        int tab[N+1][W+1];
        for(int j=1; j<=N; j++){
            for(int k=0; k<=W; k++){
                tab[0][j] = 0;
                if(wt[j]>k)
                    tab[j][k] = tab[j-1][k];
                else
                    tab[j][k] = max( tab[j-1][k] , tab[j-1][k-wt[j]] + val[j] );
            }
        }
        cout<<tab[N][W]<<endl;
    }
    return 0;
}
