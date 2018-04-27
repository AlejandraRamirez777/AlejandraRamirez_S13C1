#include <iostream>
#include<algorithm> // for copy()
#include<vector>

using namespace std;


int main () {

    //double v = 0.01;
    double v = 1;
    //dx es igual a dy
    double dx = 1;
    //
    double dt = 0.0001;
    //double dt = (dx*dx)/(v*2);
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
    while(t <10){
        for(int i=1; i<T.size()-1;i++){
            for(int k=1; T[i].size()-1;k++){
                Tf[i][k] = T[i][k] + (a*v)*(T[i][k-1] + T[i-1][k] - 4*T[i][k] +T[i+1][k] +T[i][k+1]);
          	cout << Tf[i][k] << " ";
            }
           //copy(Tf.begin(), Tf.end(), T.begin());

        }
       
     //cout << t << " ";
     t += dt;
    }
    
return 0;
}
