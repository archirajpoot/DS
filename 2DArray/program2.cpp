#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {

            sum = sum + a[i][j];
        }
    }
    // for(int i=0;i<3;i++){
    //   sum=sum+a[i][i];
    // }
    '/
     b

    cout << "sum" << sum << endl;
    return 0;
}