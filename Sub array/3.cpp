// First Repeating Element

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j] == arr[i]){
                ans = min(ans,j);
                cout<<ans<<endl;
                return 0;
            }
        }
    }
}