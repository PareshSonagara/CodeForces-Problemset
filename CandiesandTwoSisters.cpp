#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int candy;
        cin>>candy;
        if(candy%2==0){
            candy=candy/2-1;
        }
        else{
            candy=candy/2;
        }
        cout<<candy<<endl;
    }
return 0;
}