#include<bits/stdc++.h>
using namespace std;

int LargeSmallSum(vector<int>arr){
    int n=arr.size();
    if(n<=3){
        return 0;
    }
    vector<int>evenpos;
    vector<int>oddpos;
    for(int i=0;i<n;i++){
        if(i%2==0){
            evenpos.push_back(arr[i]);
        }
        else{
            oddpos.push_back(arr[i]);
        }
    }
    sort(evenpos.rbegin(),evenpos.rend());
    sort(oddpos.begin(),oddpos.end());

    return evenpos[1] + oddpos[1];

}
int main(){
    vector<int>arr={1,8,0,2,3,5,6};
    cout<<LargeSmallSum(arr)<<endl;
    return 0;
}