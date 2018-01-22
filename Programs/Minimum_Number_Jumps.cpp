#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,N,p,tmp,tmp1,except(0),iterate(0);
    vector<int> A;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        tmp=tmp1=0;iterate=0;except=0;
        for(int j=0;j<N;j++){
            cin>>p;
            A.push_back(p);
        }
        for(int j=0;j<N;j++){
            if(j+tmp>A.size()-1){
                cout<<iterate<<endl;
                break;
            }else{
                if(tmp==0){
                    if(except != 0){
                        j=except;
                        except=0;
                    }
                    tmp=tmp1=A[j];
                    iterate++;
                }else{
                    if(tmp1<(A[j]-tmp)){
                        except = j;
                    }
                }
                tmp--;
            }
        }
    }
    return 0;
}
