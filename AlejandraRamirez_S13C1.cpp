#include <iostream>
#include<algorithm> // for copy()
#include<vector>

using namespace std;


int main () {

    double v = 0.0001;
    //dx es igual a dy
    double dx = 1;
    //
    double dt = 0.001;
    double Tc = 100.0;
    double Ta = 50.0;

    double a = dt/(dx*dx);
    
    int nR= 100;
    int nC= 100;
    
    vector<vector<double> > T(nR);

    //Generar matrix
    for (int i = 0; i < T.size(); i++) {
        T[i] = vector<double>(nC);
    }

    // Matrix: vector 2d llenado
    for (int i = 0; i < T.size(); i++) {
        for (int k = 0; k < T[i].size(); k++){
            if((i >= 40 and i <= 60) and ( k >= 10 and k <= 30)){
                T[i][k] = 100;
		cout << T[i][k] << " ";
            }
            else{
                T[i][k] = 50;
                cout << T[i][k] << " ";
            }
        }
        cout << endl;
    }


    
return 0;
}
