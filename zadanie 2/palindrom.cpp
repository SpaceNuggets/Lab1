#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{

    int isTrue=1;
    int ile=strlen(argv[1]);
    for(int i=0;i<ile/2;i++){
        if(argv[1][i]==argv[1][ile-1-i])
            continue;
        else{
            isTrue=0;
            break;
        }   
    }
    if(isTrue)
        cout << "Jest palindromem";
    else
        cout << "Nie jest palindromem";
}