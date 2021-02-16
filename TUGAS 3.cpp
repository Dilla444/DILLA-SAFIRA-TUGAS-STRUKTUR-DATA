#include <iostream>
using namespace std;

int main(){
	int i,j,m,n, matriks [10][10], transpose[10][10];
	cout<<"masukkan jumlah baris matriks:";
	cin>>m;
	cout<<"masukkan jumlah kolom matriks:";
	cin>>n;
	cout<<"masukkan elemen matriks\n";
	for (i=0;i<m;i++){
	for (j=0;j<n;j++){
		cin >>matriks[i][j];
	}
}
 for (i=0;i<m;i++){
 	for (j=0;j<n;j++){
 		transpose[j][i]=matriks[i][j];
	 }
 }
 cout<<"hasil transpose matriks:\n";
 for (i=0;i<n;i++){
 	for (j=0;j<m;j++){
 		cout<<transpose[i][j]<<"\t";
	 }
	 cout<<endl;
}
 }
