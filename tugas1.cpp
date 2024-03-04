#include <iostream>
using namespace std;

int main(){
    int nMTK, nFisika, nRerata;
    string status;
    
    cout << "Masukan nilai matematika = ";
    cin >> nMTK;
    cout << "Masukan nilai fisika = ";
    cin >> nFisika;
    
    if(nMTK + nFisika == 60){
        status = "lulus";
    }
    else if(nMTK > 70){
        status = "lulus";
    }
    else if(nMTK,nFisika < 60){
        status = "tidak lulus";
    }
    cout << "Tampilkan status = " << status << endl;
    return 0;
}