#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        int count=0,k=0;
        while(count<num){
            k++;
            if(k%3!=0 && k%10!=3){
                count++;
            }
        }
        cout<<k<<endl;
    }
return 0;
}
