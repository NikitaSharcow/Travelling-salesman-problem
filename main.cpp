#include "solver.h"

int main(int argc, const char * argv[]) {
    ifstream f_in;
    f_in.open("/Users/test/Desktop/2 курс/C++/Задачи второй семестр/1. travelling salesman problem/data/tsp_51_1");
    solver Solv(f_in);
    return 0;
}
