#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int isNot;

    int num1=str1.length();
    int num2=str2.length();
    if(num1!=num2){
        cout<<"NO";
    }
    else{

    for(int i=0;i<num1;i++){
        if(str1[i]!=str2[num1-i-1]){
            isNot=0;
            break;
        }
        else{
            isNot=1;
        }
    }
    if(isNot){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    
return 0;
}