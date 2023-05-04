#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;
    char arr[1000];
    cout<<"String";
    cin>>s;
    for(int i=0; i<n ; i++)
    {
     s=arr[i]==arr[i+n] && arr[i+1]==arr[i+n-1] && arr[i+2]==arr[n+i-2] ? arr[i] : arr[i+1];
     cout<<s;
    }
    return 0;
}