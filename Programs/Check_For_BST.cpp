
#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;
};

int main(){

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T,N,H,L,tmpVal;
    Node* tmp=new Node;
    Node* head = new Node;
    char D;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>H;
            cin>>L;
            cin>>D;
            if((D=='L' && H<L) || (D=='R' && H>L)){
                cout<<0<<endl;
                break;
            }
            if(j==0){
                head->value = H;
                head->left = NULL;
                head->right = NULL;
            }
            tmpVal = head->value;
            tmp = head;
            while(H!=tmpVal){
                if(H<tmpVal){
                    if(tmp->left!=NULL){
                        tmp=tmp->left;
                    }else{
                        cout<<0<<endl;
                        break;
                    }
                }
                if(H>tmpVal){
                    if(tmp->right!=NULL){
                        tmp=tmp->right;
                    }else{
                        cout<<0<<endl;
                        break;
                    }
                }
                tmpVal = tmp->value;
            }
            if(D=='L'){
                if(tmp->left!=NULL){
                    cout<<0<<endl;
                    break;
                }else{
                    Node* tmp1 = new Node;
                    tmp1->value=L;
                    tmp1->left=NULL;
                    tmp1->right=NULL;
                    tmp->left=tmp1;
                }
            }else{
                if(tmp->right!=NULL){
                    cout<<0<<endl;
                    break;
                }else{
                    Node* tmp1 = new Node;
                    tmp1->value=L;
                    tmp1->left=NULL;
                    tmp1->right=NULL;
                    tmp->right=tmp1;
                }
            }
            if(j==N-1)
                cout<<1<<endl;
        }
    }
}
