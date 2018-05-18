#include <iostream>
#include <fstream>

using namespace std;

int main(){
  char data[100];

  //open a file in write mode
  ofstream outfile;
  outfile.open("afile.dat");

  cout << "Writing to the file" << endl;
  cout << "Enter your name: ";

  cin.getline(data,100);
  //getline()是完成读入一行数据
  //从data中至多读取100个字符

  //write inputted data into the file
  outfile << data << endl;
  //outfile << "Your name: " << data << endl;

  cout << "Enter your age: ";
  cin >> data;
  cin.ignore();
  //ignor()函数忽略先前读取语句留下的额外字符


  //again write inputted data into the file
  outfile << data << endl;

  //closed the opened file
  outfile.close();

  //open a file in read mode
  ifstream infile;
  infile.open("afile.dat");

  cout << "Reading from file\n";
  infile >>data;

  //write the data at the screen
  cout << data << endl;

  //again read the data from the file and display it
  infile >> data;
  cout << data <<endl;

  //closed the opened file
  infile.close();

  return 0;

}
