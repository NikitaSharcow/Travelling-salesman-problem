#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class parcer{
protected:
    int N;
    vector<double> x, y;
public:
    parcer(ifstream &f_in);
};
