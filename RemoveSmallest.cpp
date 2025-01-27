#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int n;
        cin>>n;
        vector<int> vec(n);

        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());

        bool isPossible=true;
        for(int i=1;i<n;i++){
            if(vec[i]-vec[i-1]>1){
                isPossible=false;
                break;
            }
        }
        if(isPossible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}