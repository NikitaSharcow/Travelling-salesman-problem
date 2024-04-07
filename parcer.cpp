#include "parcer.h"

parcer::parcer (ifstream &f_in){
    setlocale(LC_ALL, "eng");
    string s;
    f_in>>s;;
    N = stoi(s);
    for (int i=0;i<N;i++){
        f_in>>s;
        x.push_back(stod(s));
        f_in>>s;
        y.push_back(stod(s));
    }
}
