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
    
    //T presente
    vector<vector<double> > T(nR);
    //T futuro
    vector<vector<double> > Tf(nR);

    //Generar matrices
    for (int i = 0; i < T.size(); i++) {
        T[i] = vector<double>(nC);
	Tf[i] = vector<double>(nC);
    }

    // Matriz: vector 2d llenados
    for (int i = 0; i < T.size(); i++) {
        for (int k = 0; k < T[i].size(); k++){
            if((i >= 40 and i <= 60) and ( k >= 10 and k <= 30)){
                 T[i][k] = 100;
		 Tf[i][k] = 100;
	        //cout << T[i][k] << " ";
            }
            else{
                T[i][k] = 50;
                Tf[i][k] = 50;
                //cout << T[i][k] << " ";
            }
        }
        //cout << endl;
    }

    double t = 0;
    //Generar recorrido
    while(t <2500){
        for(int i=0; i<T.size();i++){
            for(int k=1; T[i].size();k++){
                //Tf[i][k] = 
                //Uf[k] = U[k] - c*(dt/dx)*(U[k]-U[k-1]);
	        //cout << X[k] <<  " " << Uf[k] << endl;
            }
            ///copy(Uf.begin(), Uf.end(), U.begin());
        }

     t += dt;
    }

    
return 0;
}
