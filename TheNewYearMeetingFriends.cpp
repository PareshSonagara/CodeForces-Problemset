#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> num;
    for(int i=0;i<3;i++){
        int n;
        cin>>n;
        num.push_back(n);
    }
    sort(num.begin(),num.end());

    cout<<num[2]-num[0];
return 0;
}