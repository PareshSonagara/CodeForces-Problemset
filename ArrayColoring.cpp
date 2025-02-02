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
        int sum=0;
        vector<int> vec(n);
        for(int i:vec){
            cin>>i;
            sum+=i;
        }

        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}