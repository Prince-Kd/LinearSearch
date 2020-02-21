#include <iostream>

using namespace std;

int LinSearch(int arr[], int t, int A)
{
    if( A ==0)
        return -1;
    else if( t == arr[A-1])
        return A;
    else
        return LinSearch(arr,t,A-1);
}

int main()
{
    int Arr[100],Num,Key;
    int Pos = 0;
    cout<<"Enter the size of the array"<<endl;
    cin>>Num;
    cout<<"Enter the members of the array:"<<endl;
    for(int i = 0; i < Num; i++)
        cin>>Arr[i];
    cout<<"Enter the required number"<<endl;
    cin>>Key;
    Pos = LinSearch(Arr, Key, Num);
    if(Pos == -1)
        cout<<"Number not found";
    else
    cout<<"Number found at position "<< Pos;

    return 0;
}
