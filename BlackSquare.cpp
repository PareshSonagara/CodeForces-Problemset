#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    string str;
    cin>>str;
    int o1=0,t2=0,t3=0,f4=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='1'){
            o1++;
        }
        else if(str[i]=='2'){
            t2++;
        }
        else if(str[i]=='3'){
            t3++;
        }
        else if(str[i]=='4'){
            f4++;
        }
    }
    cout<<a*o1+b*t2+c*t3+d*f4<<endl;
return 0;
}