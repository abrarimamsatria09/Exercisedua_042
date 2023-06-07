#include <iostream>
using namespace std;

class bidangDatar {
	private:
		int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
	public:
	bidangDatar(){ //contructor
		x = 0;
	}
	virtual void input(){} //fungsi yang menerima input dan mengirim input melalui fungsi setX disimpan di x
	virtual float luas(int a) {return 0;} //fungsi untuk menghitung luas
	virtual float keliling(int a){return 0;} //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() { 
		cout << "lingkaran dibuat Masukkan jejari: ";
		int jejari;
		cin >> jejari;
		setX(jejari);
	}
	float luas(int a) {
		return 3.14 * a * a;
	}
	float keliling(int a) {
		return 2 * 3.14 * a;
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "Bujursangkar dibuat Masukkan sisi: ";
		int sisi;
		cin >> sisi;
		setX(sisi);
	}
	float luas(int a) {
		return a * a;
	}
	float keliling(int a) {
		return 4 * a;
	}
};

int main() {
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	lingkaran.input();
	cout << "Luas lingkaran = " << lingkaran.luas(lingkaran.getX()) << endl;
	cout << "Keliling lingkaran = " << lingkaran.keliling(lingkaran.getX()) << endl;
	cout << "" << endl;

	bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.luas(bujursangkar.getX()) << endl;
	cout << "keliling Bujursangkar = " << bujursangkar.luas(bujursangkar.getX()) << endl;

	return 0;
}

 