#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void selection_sort(int *mas, unsigned int n){  
   for(int i=0; i < n; i++){
       for(int j=i; j>0 ; j--){
           if(mas[j-1]>mas [j]){
           swap (mas[j-1], mas[j]);
           }
           else break;
           }
       }
}

int main()

{
  unsigned int n;                            
    cin>> n;
    cin.get();   
    
    int *mas = new int [n];
    string stroka;
 getline (cin, stroka);
    istringstream stream (stroka);
    for (unsigned int i=0; i<n;i++){
        if(!(stream>> mas[i])){
            cout<<"ERROR"<<endl;
            return -1;
        }
    }

 
    selection_sort (mas,n);
    for(unsigned int i=0; i<n; i++){
        cout << mas[i] << " ";
    }
    delete[]mas;
    return 0;
}
