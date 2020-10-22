#include <iostream>

#include <string>



using namespace std;

void sorting(int arr[],int n){
    int i,j,minid;
    for(i = 0; i<n-1;i++){
        minid= i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minid])
                minid=j;
        }
        int temp=arr[minid];
        arr[minid]=arr[i];
        arr[i]=temp;
    }
}
int main(int argc, char* argv[])
{
    int* liczby = new int[argc-1];
    for(int i=0;i<argc-1;i++){
        liczby[i]=stoi(argv[i+1]);
    }
   
    sorting(liczby,argc-1);
    cout << "out = ";
    for ( int i = 0; i < argc - 1; i++ ){
         cout << liczby[i] << " ";
    }
    cout << endl;
    return 0;
}