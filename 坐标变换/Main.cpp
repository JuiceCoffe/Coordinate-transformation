#include<bits\stdc++.h>
#include"Isometry3d.h"
#include"Matrix.h"
using namespace std;


int main() {
	Matrix R1({ {0.22, -0.43, 0.88}, {0.62, 0.75, 0.22}, {-0.75, 0.5, 0.43} });
	vector<double> t1({ { -1,9,2.5 } });
	Matrix a1({ { 29},{6},{2.5 } });
	Matrix a1_({ { 29},{6},{2.5 },{1}
});
	Isometry3d T1(t1, R1);
	Matrix rst = T1.T.multiply(a1_);
	rst.h = 3;
	T1.T.display();
	cout << '*'<<endl;
	a1.display();
	cout << '='<<endl;
	rst.display();

}
