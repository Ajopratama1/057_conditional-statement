#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string status;
    srand(time(0));

    nBilangan = rand() % 10;
    cout << "Bilangannya adalah = " << nBilangan << endl;

    if(nBilangan % 2 == 0){
        status = "genap";
   }
   else{
    status = "ganjil";
   }
      cout << "Bilangannya adalah = " << nBilangan << endl;
      cout << "Status adalah = " << status << endl;
      return 0;

}