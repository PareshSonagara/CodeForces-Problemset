#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int ans[26]={0};

    for(char i : str){
        i=tolower(i);
        ans[i-'a']++;
    }

    int isFlase=1;

    for(int i=0;i<26;i++){
        if(ans[i]==0){
            isFlase=0;
            break;
        }
    }

    if(isFlase){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

return 0;
}