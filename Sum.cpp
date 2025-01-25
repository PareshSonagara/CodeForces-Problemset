#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        vector<int> n;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            n.push_back(x);
        }
        sort(n.begin(),n.end());

        if(n[2]==n[0]+n[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}