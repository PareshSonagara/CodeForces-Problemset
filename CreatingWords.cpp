#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        string str1,str2;
        cin>>str1>>str2;

        swap(str1[0],str2[0]);

        cout<<str1<<" "<<str2<<endl;
    }
return 0;
}