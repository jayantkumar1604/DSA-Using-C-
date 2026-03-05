#include <iostream>
using namespace std;

    void solve(int arr[],int size){
        cout<<"inside function : "<<arr<<endl;
        cout<<"inside function : "<<&arr<<endl;
    }
    int main(){
        int arr[]={10,20,30,40,50};
        cout<<"inside main() : "<<arr<<endl;
        cout<<"inside main() : "<<&arr<<endl;
        solve(arr,5);
    }
