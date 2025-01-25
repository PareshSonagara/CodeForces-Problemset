#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int> num(x);
    int count=0;

    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    
    int maxi=num[0];
    int mini=num[0];
    for(int i=1;i<x;i++){
        if(num[i]>maxi){
            count++;
            maxi=num[i];
        }
        else if(num[i]<mini){
            count++;
            mini=num[i];
        }
    }
    cout<<count;

return 0;
}