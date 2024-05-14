#include <iostream>
using namespace std;

class angka
{
private : 
    int *arr;
    int panjang;
public :
    angka(int); //Constructor
    ~angka(); //Destructor
    void cetakData();
    void isiData();
};
//Definisi member Function

angka::angka(int i){
    panjang = 1;
    arr = new int[1];
    isiData();
}

angka::~angka(){
    cout << endl;
    cetakData();
    delete[]arr;
    cout<<"Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData(){
    for(int i=1; i<=panjang; i++){
        cout << i << " = " << arr[1] << endl;
    }
}

void angka::isiData(){
    for(int i=1; i<=panjang; i++){
        cout << 1 << " = ";
        cin >> arr [i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3); //constructor dipanggil
    angka *ptrBelajarcpp = new angka(5); //Constructor dipanggil
    delete ptrBelajarcpp; //Destructor dipanggil

    return 0;
}//Destructor dipanggil
