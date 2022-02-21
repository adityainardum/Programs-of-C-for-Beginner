// 2D Matrix Search

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
     
     int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;

    int r=0 , c=m-1;
    bool flag = false;

    while(r<n and c>=0){
        if(a[r][c]==key){
            flag=true;
        }
        if(a[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
                                            

    return 0;
}