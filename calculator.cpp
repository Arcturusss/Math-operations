#include <iostream>
using namespace std;

int main() {
  double num1, num2;
  char op;
  
  cout << "Masukkan angka pertama: ";
  cin >> num1;
  cout << "Masukkan operator (+, -, *, /): ";
  cin >> op;
  cout << "Masukkan angka kedua: ";
  cin >> num2;
  
  switch(op) {
    case '+':
      cout << "Hasil: " << num1 + num2 << endl;
      break;
    case '-':
      cout << "Hasil: " << num1 - num2 << endl;
      break;
    case '*':
      cout << "Hasil: " << num1 * num2 << endl;
      break;
    case '/':
      if (num2 != 0)
        cout << "Hasil: " << num1 / num2 << endl;
      else
        cout << "Hasil pembagian ini nihil" << endl;
      break;
    default:
      cout << "Operator ini tidak valid" << endl;
  }
  
  return 0;
}