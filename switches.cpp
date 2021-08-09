#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character : ";
    cin>>button;
    
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namasta"<<endl;
        break;
    case 'c':
        cout<<"Salute"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
        break;
    case 'e':
        cout<<"Ciao"<<endl;
        break;
    
    default:
        cout<<"I am still learning!"<<endl;
        break;
    }
}