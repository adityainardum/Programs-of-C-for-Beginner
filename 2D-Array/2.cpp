// Searching a Matrix

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
   
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }

    if(flag){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }

    return 0;
}