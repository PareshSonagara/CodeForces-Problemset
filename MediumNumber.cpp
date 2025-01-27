#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        vector<int> vec(3);
        cin>>vec[0];
        cin>>vec[1];
        cin>>vec[2];

        sort(vec.begin(),vec.end());
        cout<<vec[1]<<endl;
    }
return 0;
}