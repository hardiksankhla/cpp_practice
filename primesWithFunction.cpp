#include<iostream> 
#include<cmath>
using namespace std;

bool isPrime(int number){
    bool flag = true;
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int a, b;
    cin>>a>>b;

    for (int i = a; i <= b; i++)
    {
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    
}

