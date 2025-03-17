#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int counter ;
    int i;
    int PerulanganWhile;
    int PerulanganDo;

    // loop with for
    for (counter = 0; counter < 5; counter++)
    {
        cout << "Nilai Counter =" << "TI UMY"<< endl;
    }
    cout << "Nilai Counter terakhir =" << counter << endl;
    cout << endl;
    
    // loop for descending
    for(counter = 5; counter >0; counter--){
        cout << "Nilai Counter = " << counter << " TI UMY"<< endl;

    }
    cout << "Nilai counter terakhir ="<< counter << endl;
    cout << endl;

    // loop with while 
    srand (time (0));
    i = rand() % 10;

    cout << "Nilai awal i =" << i << endl;
    while (i < 7)
    {
        cout << "nilai i =" << i << "TI UMY" << endl;
        i = rand() % 10;
        PerulanganWhile++;

    }
    cout << "Jumlah Perulangan =" << PerulanganWhile << endl;
    cout << "Nilai akhir i =" << i << endl;

    cout << endl;

    // loop do while 
    cout << "perulangan Do While"<< endl;
    do
    {
        cout << "Nilai i =" << i << "TI UMY" << endl;
        i = rand() % 10;
        PerulanganDo++;
    } while (i < 7);
    cout << "Jumlah perulangan = " << PerulanganDo << endl;
    cout << "Nilai akhir i =" << i << endl;
    
}