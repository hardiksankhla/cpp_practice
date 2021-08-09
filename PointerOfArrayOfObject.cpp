#include<iostream>
#include<string>
using namespace std;

class Item{
    int id;
    string name;
    float price;
    public:
        void setDataItem(int a, string b, float c){
            id = a;
            name = b;
            price = c;
        }
        void getDataItem(){
            cout<<"Id of the item is "<<id<<endl;
            cout<<"Name of the item is "<<name<<endl;
            cout<<"Price of the item is "<<price<<endl;
            cout<<endl;
        }
};

int main(){
    int n;
    cin>>n;

    Item* ptr = new Item[n];
    // OR
    // Item ptr[n];
    int id;
    string name;
    float price;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter id of the item no. "<<i+1<<" : ";
        cin>>id;
        cout<<"Enter name of the item no. "<<i+1<<" : ";
        cin>>name;
        cout<<"Enter price of the item no. "<<i+1<<" : ";
        cin>>price;
        cout<<endl;

        (ptr+i)->setDataItem(id, name, price);
        // OR
        // (*(ptr+i)).setDataItem(id, name, price);
        // OR
        // ptr[i].setDataItem(id, name, price);
    }

    for (int i = 0; i < n; i++)
    {   
        cout<<"Item number : "<<i+1<<endl;
        (ptr+i)->getDataItem();
    }
     
    return 0;
}