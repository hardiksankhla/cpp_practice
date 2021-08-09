#include<iostream> 
using namespace std;

int binarrysearch(int arr[], int n, int num){
    int s = 0;
    int e = n;
    while (s<=e)
    {   
        int midPoint = (e+s)/2;
        if (arr[midPoint]==num){
            return midPoint;
        }
        else if (arr[midPoint]>num){
            e = midPoint-1;
        }
        else if (arr[midPoint]<num){
            s = midPoint+1;
        }
        // cout<<s<<" "<<e<<" "<<midPoint<<endl;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;

    cout<<binarrysearch(array, n, key);

    return 0;
}