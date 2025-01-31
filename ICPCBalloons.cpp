#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char> ans(str.begin(),str.end());

        int answer=ans.size()+str.length();

        cout<<answer<<endl;
    }
return 0;
}