#include <iostream>
using namespace std;
class data {
	private:
		int *nim;
		int nim_mahasiswa[5];
		string *nama;
		string nama_mahasiswa[5]; 
	public:

void input(){	
	cout<<"\tData Mahasiswa Babak Final Lomba Parmatika"<<endl;
    for (int i=0; i<5; i++){
    	cout<<"Masukkan Nama : ";
    	cin>>nama_mahasiswa[i];
    	cout<<"Masukkan NIM : ";
    	cin>>nim_mahasiswa[i];
    }
}

void proses(){
	cout<<"\nMenyimpan data ke alamat \n";
	cout<<"---------------------------\n";
	nama = new string[5];
    nim = new int[5];
    for(int i=0; i<5; i++){
    	*nama = nama_mahasiswa[i];
    	nama+=1;
    	*nim = nim_mahasiswa[i];
    	nim+= 1;
    }
}

void output(){
    nim -=5 ;
    nama -=5;
    cout<<"Menampilkan data mahasiswa "<<endl;
    for (int i=0; i<5; i++) {
      cout<<"\nNama ke-" << i+1 << " : ";
      cout<<*nama ;
      nama += 1;
      cout<<"\nNim : " ;
      cout<<*nim ;
      nim += 1;
    }
  }

};

int main(){
  data sk;
  sk.input();
  sk.proses();
  sk.output();
}
