#include <iostream>
#include <string>
#include <algorithm>
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
        int check=0;
        sort(str.begin(),str.end());
        if(str=="Timru"&&n==5){
            check=1;
        }

        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}