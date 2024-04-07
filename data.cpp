#include "data.h"

double data:: lenght(int i, int j){
    return sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
};

double data:: path_lenght(vector<int> path){
    double res = 0;
    for (int i=0;i<N-1;i++) res += lenght(path[i], path[i+1]);
    res += lenght(path[0], path[N-1]);
    return res;
};

data:: data(ifstream &f_in): parcer(f_in){
    int i;
    for (i=0;i<N;i++) result.push_back(i);
    res_lenght = path_lenght(result);
};

