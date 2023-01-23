#include <iostream>
#include <cstdlib>
using namespace std;

struct uang {
        unsigned int pecahan;
};

void pembuka () {
        cout << "========================================================================================================================\n";
        cout << "\t\t\t\t    SELAMAT DATANG DI ATM BANK SYARIAH INDONESIA" << endl;
        cout << "\t\t\t      Sahabat Finansial, Sahabat Spiritual dan Sahabat Sosial" << endl;
        cout << "________________________________________________________________________________________________________________________\n";
}

void penutup () {
        cout << "========================================================================================================================\n";
        cout << "\t\t\t\t\t   TERIMA KASIH ATAS KUNJUNGAN ANDA" << endl;
        cout << "========================================================================================================================";
}

class pin {
private :
        int kode_pin1 () {
            return 12345;
        }
        int kode_pin2 () {
            return 54321;
        }
public :
        int config_pin1 () {
            return kode_pin1 ();
        }
        string nama1 () {
            return (string) "FAISAL TRIAPUTRA";
        }
        int config_pin2 () {
            return kode_pin2 ();
        }
        string nama2 () {
            return (string) "SALL";
        }
};

int main() {
        int saldo_awal1 = 500000, saldo_awal2 = 300000;
        uang dt1, dt2;      dt1.pecahan = 100000;        dt2.pecahan = 50000;
        int input_pin;
        int tarik1, setor1, kode;
        int tarik2, setor2;
        pin kode_pin1, kode_pin2;

        pembuka ();

        cout << "Silahkan masukkan PIN Anda : ";    cin >> input_pin;
        menu :
            if (input_pin == kode_pin1. config_pin1() ) {
                cout << "\t\t\t\t\t       Pecahan uang Rp " << dt1.pecahan << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "\t \t \t \t \t   SELAMAT DATANG ";
                cout << kode_pin1. nama1() << "\n \n";
                cout << "Pilihan Menu : " << endl;
                cout << "1. Tarik Tunai \n2. Setor Tunai \n3. Cek Saldo \n4. Keluar \n\n";
                cout << "Masukkan Kode Menu : ";        cin >> kode;
                switch (kode) {
                case 1 :
                            tarik1 :
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Tarik Tunai \n";
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Silahkan masukkan uang yang ingin Anda ambil : Rp ";      cin >> tarik1;

                                    if (tarik1 != 100000) {
                                        cout << "Maaf, pecahan uang yang diambil harus Rp 100.000" << endl;
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto tarik1;
                                    }
                                    else {
                                        if (tarik1 > saldo_awal1)
                                            cout << "Maaf, saldo Anda tidak mencukupi" << endl;

                                        else {
                                            saldo_awal1 -= tarik1;
                                            cout << "\n-------------------------------------------------\n";
                                            cout <<  "Transaksi Berhasil" << endl;
                                            cout << "Total saldo Anda sekarang, Rp " << saldo_awal1 << endl;
                                            cout << "-------------------------------------------------\n";
                                        }
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto menu;
                }
                break;
                case 2 :
                            setor1 :
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Setor Tunai" << endl;
                                    cout << "-------------------------------------------------\n";
                                    cout << "Silahkan masukkan uang yang ingin Anda setor : Rp ";      cin >> setor1;
                                    if (setor1 != 100000) {
                                        cout << "Maaf, pecahan uang yang Anda setor harus Rp 100.000" << endl;
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto setor1;
                                    }
                                    else {
                                            saldo_awal1 += setor1;
                                            cout << "\n-------------------------------------------------\n";
                                            cout << "Total saldo Anda sekarang, Rp " << saldo_awal1 << endl;
                                            cout << "-------------------------------------------------\n";
                                            system ("pause");
                                            system ("cls");
                                            pembuka ();
                                            goto menu;
                }
                break;
                case 3 :
                            cout << "\n-------------------------------------------------\n";
                            cout << "Cek Saldo" << endl;
                            cout << "-------------------------------------------------\n";
                            cout << "Total Saldo Anda sekarang, Rp " << saldo_awal1 << endl;
                            cout << "-------------------------------------------------\n";
                            system ("pause");
                            system ("cls");
                            pembuka ();
                            goto menu;
                break;
                case 4:
                            penutup ();
                            cout << endl;
                break;
                default :
                            cout << "Kode yang Anda pilih tidak ada, \nPastikan kode yang Anda masukkan benar \n" << endl;
                            system ("pause");
                            system ("cls");
                            pembuka ();
                            goto menu;
                break;
            }
        }

        else if (input_pin == kode_pin2. config_pin2() ) {
                cout << "\t\t\t\t\t         Pecahan uang Rp " << dt2.pecahan << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "\t \t \t \t \t \t  SELAMAT DATANG ";
                cout << kode_pin2. nama2() << "\n \n";
                cout << "Pilihan Menu : " << endl;
                cout << "1. Tarik Tunai \n2. Setor Tunai \n3. Cek Saldo \n4. Keluar \n\n";
                cout << "Masukkan Kode Menu : ";        cin >> kode;
                switch (kode) {
                case 1 :
                            tarik2 :
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Tarik Tunai \n";
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Silahkan masukkan uang yang ingin Anda ambil : Rp ";      cin >> tarik2;

                                    if (tarik2 !=50000) {
                                        cout << "Maaf, pecahan uang yang diambil harus Rp 50.000" << endl;
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto tarik2;
                                    }
                                    else {
                                        if (tarik2 > saldo_awal2)
                                            cout << "Maaf, saldo Anda tidak mencukupi" << endl;

                                        else {
                                            saldo_awal2 -= tarik2;
                                            cout << "\n-------------------------------------------------\n";
                                            cout <<  "Transaksi Berhasil" << endl;
                                            cout << "Total saldo Anda sekarang, Rp " << saldo_awal2 << endl;
                                            cout << "-------------------------------------------------\n";
                                        }
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto menu;
                }
                break;
                case 2 :
                            setor2 :
                                    cout << "\n-------------------------------------------------\n";
                                    cout << "Setor Tunai" << endl;
                                    cout << "-------------------------------------------------\n";
                                    cout << "Silahkan masukkan uang yang ingin Anda setor : Rp ";      cin >> setor2;
                                    if (setor2 != 50000) {
                                        cout << "Maaf, pecahan uang yang Anda setor harus Rp 50.000" << endl;
                                        system ("pause");
                                        system ("cls");
                                        pembuka ();
                                        goto setor2;
                                    }
                                    else {
                                            saldo_awal2 += setor2;
                                            cout << "\n-------------------------------------------------\n";
                                            cout << "Total saldo Anda sekarang, Rp " << saldo_awal2 << endl;
                                            cout << "-------------------------------------------------\n";
                                            system ("pause");
                                            system ("cls");
                                            pembuka ();
                                            goto menu;
                }
                break;
                case 3 :
                            cout << "\n-------------------------------------------------\n";
                            cout << "Cek Saldo" << endl;
                            cout << "-------------------------------------------------\n";
                            cout << "Total Saldo Anda sekarang, Rp " << saldo_awal2 << endl;
                            cout << "-------------------------------------------------\n";
                            system ("pause");
                            system ("cls");
                            pembuka ();
                            goto menu;
                break;
                case 4:
                            penutup ();
                            cout << endl;
                break;
                default :
                            cout << "Kode yang Anda pilih tidak ada, \nPastikan kode yang Anda masukkan benar \n" << endl;
                            system ("pause");
                            system ("cls");
                            pembuka ();
                            goto menu;
                break;
            }
        }

        else {
                cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t\t\t\t  PIN salah, pastikan PIN yang Anda masukkan benar" << endl;
                cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
        }
}
