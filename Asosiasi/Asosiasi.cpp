#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {// asosiasi
public:
	string nama;
	vector <dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "pasien \"" << nama << "\" ada \"";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\" ada\n";
	}
};