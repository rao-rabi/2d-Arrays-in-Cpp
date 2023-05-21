#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and coloumns: "<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the numbers: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"The 2d array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}