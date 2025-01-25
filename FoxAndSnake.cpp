#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        if(i%4==1||i%4==3){
            for(int j=1;j<=col;j++){
                cout<<"#";
            }
        }
        else if(i%4==2){
            for(int j=1;j<col;j++){
                cout<<".";
            }
            cout<<"#";
        }
        else{
            cout<<"#";
            for(int j=2;j<=col;j++){
                cout<<".";
            }
        }
        cout<<endl;
    }
return 0;
}