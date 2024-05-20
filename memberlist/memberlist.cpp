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
	mahasiswa (int pId, string pNama, float PNilai)
		:id(pId), nama(pNama), nilai(PNilai) {
		//Definisi
	}

	~mahasiswa() {
		cout << "Id    = " << id << endl;
		cout << "Nama  = " << nama << endl;
		cout << "Nilai = " << nilai << endl;
	}
		
};

int main() {
	mahasiswa mhs(12, "Asroni", 90,5);
	mahasiswa mhs2(16, "")

	return 0;
}