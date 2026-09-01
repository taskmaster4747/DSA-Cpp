#include<iostream>
using namespace std;
int main(){
    for(int a = 10; a<20 ; a = a + 1){
        cout<<"vaue of a is :"<<a<<endl;
 //if ani value 17 hoy to a ni value break karidese
        if( a==17){
            break;
        }
    }
    return 0;
}