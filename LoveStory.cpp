#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string target="codeforces";
    while(num--){
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<10;i++){
            if(str[i]!=target[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}