#include "Complex.h"
#include <iostream>
#include <fstream>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;
int main()
{
    vector <double> s;
    setlocale(LC_ALL, "rus");
    string p = "Chisla.txt";
    ifstream F;
    F.open(p);
    complex a;
    if (!F.is_open()) {
        cout << "Файл не открыт" << endl;
     }
    else {
        while (!F.eof()) {
            if (F >> a.re >> a.im) {
                double zi = a.modul();
                s.push_back(zi);
            }
        }

    }
    cout << s.size()<<endl;
    //sort(s.begin(), s.end(), maxmod);
    cout << s[0];
}


