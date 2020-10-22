#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{

    
    int a [2][3];
    int b [2][3];
    int c [2][3];
    srand(time(NULL));
    cout<<"Macierz a wyglada nastepujaco:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            a[i][j]=rand() %10;
            cout<<setw(3);
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
     cout<<"Macierz b wyglada nastepujaco:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            b[i][j]=rand() %10;
            cout<<setw(3);
            cout<<b[i][j]<<" ";
        }
        cout << endl;
    }
     cout<<"Suma macierzy wyglada nastepujaco:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<setw(3);
            cout<<c[i][j]<<" ";
        }
        cout << endl;
    }
   return 0;
}