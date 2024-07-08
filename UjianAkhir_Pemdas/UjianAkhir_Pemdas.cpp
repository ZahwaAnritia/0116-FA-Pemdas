#include <iostream>
#

using namespace std;
class MataKuliah
{
private: // isi dengan access modifier yang dibutuhkan
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;


	// tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:

	MataKuliah()
	{
		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;
	}

	virtual void namaMataKuliah() {
		cout << "Mata Kuliah:" << endl;
	}
	virtual void inputNilai() = 0;

	virtual float hitungNilaiAkhir() = 0;

	virtual void cekKelulusan() = 0;

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float  nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}
	void setTugasAkhir(float nilai)
	{
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir()
	{
		return tugasAkhir;
	}

	// isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
};
	


class Pemrograman : public MataKuliah
{
public:
	

	void namaMataKuliah() {
		cout << "Pemrograman" << endl;
	}
	void inputNilai()
	{
		float nilai;
		cout << "Masukkan nilai presensi: ";
		cin >> nilai;
		setPresensi(nilai);

		cout << "Masukkan nilai activity: ";
		cin >> nilai;
		setActivity(nilai);

		cout << "Masukkan nilai exercise: ";
		cin >> nilai;
		setExercise(nilai);

		cout << "Masukkan nilai tugas akhir: ";
		cin >> nilai;
		setTugasAkhir(nilai);
	}

	float hitungNilaiAkhir()
	{
		return;
	}
	void cekKelulusan()
	{
		float nilaiAkhir = hitungNilaiAkhir();
		cout << "Nilai Akhir: " << nilaiAkhir << endl;
		if (nilaiAkhir >= 75)
		{
			cout << "Selamat anda dinyatakan Lulus" << endl;
		}
		else
		{
			cout << "Anda dinyatakan Tidak Lulus" << endl;
		}
	}

	
};

class Jaringan : public MataKuliah
{
private:
	float nilai;
	// isi disini untuk mengisi kelas jaringan
public:
	void namaMataKuliah()
	{
		cout << "Jaringan" << endl;
	}


	void setNilai(float n) {
		this->nilai = n;
	}

	float getNilai() {
		return nilai;
	}

};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;

	
	// isi disini untuk menentukan mata kuliah yang dipilih
}