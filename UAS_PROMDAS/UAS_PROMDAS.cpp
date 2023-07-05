#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getpresensi() {
		return presensi;
	}
	void setactivity(float nilai) {
		activity = nilai;
	}
	float getactivity() {
		return activity;
	}
	void setexercise(float nilai) {
		exercise = nilai;
	}
	float getexercise() {
		return exercise;
	}
	void settugasAkhir(float nilai) {
		tugasAkhir = nilai;
	}
	float gettugasAkhir() {
		return tugasAkhir;
	}
};
class Pemrograman : public MataKuliah { 
public:
	float hitungNilaiAkhir() {
		return (getpresensi() + getactivity() + getexercise() + gettugasAkhir()) / 4;
	}

	void cekkelulusan() {
		float nilai_akhir = hitungNilaiAkhir();
		if (nilai_akhir >= 75) {
			cout << "Selamat, anda telah lulus di mata kuliah pemrograman dengan nilai akhir " << nilai_akhir << "\n";
		}
		else {
			cout << "Maaf, anda tidak lulus di mata kuliah pemrograman dengan nilai akhir " << nilai_akhir << "\n";
		}
	}

	void input() {
		cout << "Masukkan nilai Presensi: ";
		float presensi;
		cin >> presensi;
		setPresensi(presensi);

		cout << "Masukkan nilai activity: ";
		float activity;
		cin >> activity;
		setactivity(activity);

		cout << "Masukkan nilai exercise: ";
		float exercise;
		cin >> exercise;
		setexercise(exercise);

		cout << "Masukkan nilai tugas akhir: ";
		float tugasAkhir;
		cin >> tugasAkhir;
		settugasAkhir(tugasAkhir);
	}
};

int main() {
	char repeat;

	do {
		cout << "Program dibuat\n";

		Pemrograman pemrograman;
		pemrograman.input();
		pemrograman.cekKelulusan();

		cout << "Apakah anda ingin mengulangi Program ini? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	return 0;
}