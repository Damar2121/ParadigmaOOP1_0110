#include <iostream>
#include <string>
using namespace std;

//nama repo: ParadigmaOOP1_0110 Commit 15 
class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama) {
		//definisi
	}

	~mahasiswa() {
		cout << "id   = " << id << endl;
	}
		
};