#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int x;
        cin>>x;
        string str=to_string(x);
        int digit=0;
        int n=str.length();

        if(n==4){
            digit=10;
        }
        else if(n==3){
            digit=6;
        }
        else if(n==2){
            digit=3;
        }
        else{
            digit=1;
        }


        for(int i=2;i<10;i++){
            if(x%10==i){
                digit+=(i-1)*10;
                break;
            }
        }

        cout<<digit<<endl;

    }
return 0;
}