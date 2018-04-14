#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
  {
  
vec X = "147, 150, 153, 158, 163, 165, 168, 170, 173, 175, 178, 180, 183";
vec y = "49, 50, 51,  54, 58, 59, 60, 62, 63, 64, 66, 67, 68";
vec one;
one.ones(size(X));

mat T = join_cols(one, X);
//A.insert_colum
//cout<<A.n_cols;
mat Xbar = join_rows(one,X);  
mat A = Xbar.t()*Xbar;
mat b = Xbar.t()*y;
mat w =  pinv(A)*b;
cout<<w;  	

  
  return 0;
  }
