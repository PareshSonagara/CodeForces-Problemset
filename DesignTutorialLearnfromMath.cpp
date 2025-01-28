#include <iostream>
#include <cmath>
using namespace std;

bool isComposite(int x){
    if(x<4) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    cin>>num;

    for(int x=4;x<num;x++){
        int y=num-x;

        if(isComposite(x) && isComposite(y)){
            cout<<x<<" "<<y<<endl;
            return 0;
        }
    }
return 0;
}