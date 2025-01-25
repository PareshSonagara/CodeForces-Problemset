#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int n;
        cin>>n;
        vector<int> result;
        int count=1;
        while(n){
           int rem=n%10;
           if(rem>0){
            result.push_back(rem*count);
           }
           count*=10;
           n/=10;
        }
        cout<<result.size()<<endl;
        for(int i:result){
            cout<<i<<" ";
        }
        cout<<endl;
    }   
return 0;
}