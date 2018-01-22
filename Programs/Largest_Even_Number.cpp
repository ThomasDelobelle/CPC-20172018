#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

bool comparator(int a,int b){
    return (a>b);
}

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,a,siz;
    string p;
    int e = 2000;
    string t;
    cin>>T;
    vector <string> A;
    for(int i=0;i<T;i++){
        cin>>p;
        A.push_back(p);
    }
    for(int i=0;i<T;i++){
        e=2000;
        siz=A[i].length();
        vector<int> tab;
        for(int j=0;j<siz;j++){
            a=(int)A[i][j];
            if(a%2==0 && e>a){
                if(e!=2000)
                    tab.push_back(e);
                e=a;
            }else
                tab.push_back(a);
        }
        sort(tab.begin(),tab.end(),comparator);
        for(int j=0;j<siz-1;j++){
            cout<<(char)tab[j];
        }
        if(e==2000)
            cout<<(char)tab[siz-1]<<endl;
        else
            cout<<(char)e<<endl;
    }
}