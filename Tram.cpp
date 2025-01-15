#include <iostream>
using namespace std;
int main(){
    long num;
    int remain=0;
    int out,in;
    int min=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>out>>in;
        remain+=in-out;
        min=max(min,remain);
    }
    cout<<min<<endl;
    return 0;
}