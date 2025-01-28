#include <iostream>
using namespace std;
int main()
{
    int rounds;
    cin>>rounds;
    int m=0,c=0;
    for (int i = 0; i < rounds; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y){
            m++;
        }
        else if(x<y){
            c++;
        }
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    else if(m<c){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    
return 0;
}