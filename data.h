#include "parcer.h"

using namespace std;

class data: public parcer{
protected:
    vector<int> result;
    double res_lenght;
public:
    data(ifstream &f_in);
    double lenght(int i, int j);
    double path_lenght(vector<int> path);
};
