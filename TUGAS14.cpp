#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengenkripsi data dengan menggunakan XOR
string encrypt(string data, string key) {
  string encrypted_data;
  for (int i = 0; i < data.size(); i++) {
    encrypted_data += data[i] ^ key[i % key.size()];
  }
  return encrypted_data;
}

// Fungsi untuk mendekripsi data dengan menggunakan XOR
string decrypt(string encrypted_data, string key) {              
  string data;
  for (int i = 0; i < encrypted_data.size(); i++) {
    data += encrypted_data[i] ^ key[i % key.size()];
  }
  return data;
}

int main() {
  // Meminta pengguna untuk memasukkan data yang akan dienkripsi
  string data;  
  cout << "Masukkan data yang akan dienkripsi: ";
  getline(cin, data);

  // Meminta pengguna untuk memasukkan kunci yang akan digunakan untuk enkripsi dan deskripsi
  string key;
  cout << "Masukkan kunci enkripsi: ";
  getline(cin, key);

  // Menjalankan proses enkripsi
  string encrypted_data = encrypt(data, key);
  cout << "Data yang dienkripsi: " << encrypted_data << endl;

  // Menjalankan proses deskripsi
  string decrypted_data = decrypt(encrypted_data, key);
  cout << "Data yang dideskripsi: " << decrypted_data << endl;

  return 0;
}