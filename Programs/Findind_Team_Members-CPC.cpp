#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    string courant = "";
    string chaine = "";
    int T,N,compteur,max;

    
        
            for(int j=0; j<N-1; j++){
                max = 0;
                for(int k=j+1;k<N;k++){
                    if(max < tab[k]) max = tab[k];
                }
                fichier1 << max << ' ';
            }
            fichier1 << '-1\n';
        }

        fichier.close();
        fichier1.close();
    }
    else
        cout << "File1 Error" << endl;

}
