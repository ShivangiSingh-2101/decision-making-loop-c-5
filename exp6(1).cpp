//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    string password = "Sammy";
    int a=0;
    while(true){
        cout<< "enter the password : "<<endl;
        string p;
        cin>>p;
        if (p==password){
            cout<<"correct!!  ";
            break;
        }
        else{
            cout<<"try again"<<endl;
        }
    }
return 0;
}
/*output: 
enter the password : 
Sam
try again
enter the password : 
Shampoo
try again
enter the password : 
Sammy
correct!! */
