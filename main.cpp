#include <iostream>
using namespace std;


struct mahasiswa
{
   char nim[25],nama[20],jurusan[15],kelas[15];
}data;

struct nilai
{
    char matkul[20];
    float absen,tugas,uts,uas,bobot;
    int sks,mks;
    float ip;
} penilaian[100];

int main (){
    int a,jml,absen;
    float ipk,jumsks=0,mutu=0;

    cout <<"|=====Kartu Hasil Studi (KHS)=======|\n";

    cout <<"NIM \t \t :"; gets(data.nim);
    cout <<"Nama \t \t:"; gets(data.nama);
    cout <<"Jurusan \t \t :"; gets(data.jurusan);
    cout <<"Kelas \t \t:"; gets(data.kelas);

    cout << "=====================================\n";

    cout <<"Banyaknya Mata Kuliah \t: ";
    cin >> jml;
    cout << endl;
    cout<<"=======================================\n";

        for( a = 0; a < jml; a++)
        {
            cout << "\n Nama Mata Kuliah \t:"; cin >> penilaian[100].matkul;
            cout << "\n SKS \t \t:";cin >> penilaian[a].sks;cout <<"\n Nilai Absen \t:";
            cin >> penilaian[a].absen;cout <<"\n Nilai Tugas \t:";
            cin >> penilaian[a].tugas;cout <<"\n Nilai UTS \t:";
            cin >> penilaian[a].uts;cout <<"\n Nilai UAS \t:";
            cin >> penilaian[a].uas;
            absen=penilaian[a].absen*10/penilaian[a].sks;
//Penghitungan
            penilaian[a].ip=(0.1*absen)+(0.2*penilaian[a].tugas)+(0.3*penilaian[a].uts)+(0.4*penilaian[a].uas);



            cout <<"\n Nilai Akhir \t:"<<penilaian[a].ip;
            cout <<"\n Nilai Huruf \t:";
                if (penilaian[a].ip>=80) {
                    cout << "A";
                    penilaian[a].bobot=4*penilaian[a].sks;

                }else if (penilaian[a].ip >67 && penilaian[a].ip <=80){
                    cout << "B";
                    penilaian[a].bobot=3*penilaian[a].sks;

                }else if (penilaian[a].ip >55 && penilaian[a].ip <=67){
                    cout << "C";
                    penilaian[a].bobot=2*penilaian[a].sks;
                }else if (penilaian[a].ip >46 && penilaian[a].ip <=55){
                    cout << "D";
                    penilaian[a].bobot=1*penilaian[a].sks;

                }else if (penilaian[a].ip <46){
                    cout << "E";
                    penilaian[a].bobot=0*penilaian[a].sks;
                }


            jumsks=jumsks+penilaian[a].sks;
            mutu=mutu+penilaian[a].bobot;
            ipk=mutu;

            cout << endl;
            cout << "_______________________________________________";
                
        }

            cout <<"\n Total SKS yang di ambil \t :" <<jumsks;
            cout <<"\n IPK \t:" <<ipk/jumsks;

            cout << endl;
            cout << "\n_______________________________________________";
            cout << endl;
        
    

    return 0;
}



