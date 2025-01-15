#include <iostream>
using namespace std;
int main()
{
    int number,height;
    cin>>number>>height;
    int sum=0;
    int h1;
    for(int i=0;i<number;i++){
        cin>>h1;
        if(height<h1){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum;
    
return 0;
}