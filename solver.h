#include "data.h"

using namespace std;

class solver: public data{
public:
    solver(ifstream &f_in);
    void print_path(vector<int> path);
};
