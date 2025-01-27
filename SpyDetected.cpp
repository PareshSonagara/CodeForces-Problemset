#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ind;
        if(arr[0]!=arr[1] && arr[0]!=arr[2]){
            ind=1;
        }
        else{
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[0]){
                    ind=i+1;
                    break;
                }

            }
        }
        cout<<ind<<endl;
    }
return 0;
}