#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;

    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    for(int i:vec){
        if(i<=5-k){
            count++;
        }
    }

    cout<<count/3;
    
    
return 0;
}