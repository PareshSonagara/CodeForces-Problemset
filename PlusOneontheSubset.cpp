#include <iostream>
#include <algorithm>
#include <vector>
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

        int mini=*min_element(vec.begin(),vec.end());
        int maxi=*max_element(vec.begin(),vec.end());


        cout<<maxi-mini<<endl;
    }
return 0;
}