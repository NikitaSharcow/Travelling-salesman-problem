#include "solver.h"

void solver:: print_path(vector<int> path){
    for (int i=0;i<path.size();i++) cout << path[i] << " ";
    cout << endl;
};

solver:: solver(ifstream &f_in): data(f_in){
    double diff;
    for (int i=0; i<N-1; i++)
        for (int j=i+2; j<N; j++) {
            diff = lenght(result[i], result[j]) + lenght(result[i+1], result[(j+1)%N]) - lenght(result[i], result[i+1]) - lenght(result[j], result[(j+1)%N]);
            if (diff < 0) {
                reverse(result.begin()+i+1,result.begin()+j+1);
                res_lenght += diff;
                j = i+2;
            }
        }
    print_path(result);
    cout << res_lenght << endl;
};
