#include <string>
#include <iostream>
#include <fstream>
using namespace std;


void readFromFile(string myFileName){
  ifstream inFS; //Input file stream
  int fileNum; //File data

//Open file

  cout << "Opening file myfile.txt." << endl;
  inFS.open(myFileName);

  if (!inFS.is_open()) {
    cout << "Could not open file myfile.txt." << endl;
    //return 1;
  }

  // Print read numbers to output
  cout << "Reading and printing numbers." << endl;

  inFS >> fileNum;
  while (!inFS.fail()) {
    cout << "num: " << fileNum << endl;
    inFS >> fileNum;
  }
  if (!inFS.eof()) {
    cout << "num: " << fileNum << endl;
    inFS >> fileNum;
  }
  if (!inFS.eof()) {
    cout << "Input failure before reaching end off file." << endl;
  }
  cout << "Closing file myfile.txt." << endl;

  //Done with file, so close it
  inFS.close();
}
void writeToFile(string outputFile) {
  ofstream outFS; // Output file stream
  // Open file
  outFS.open(outputFile);

  if (!outFS.is_open()) {
    cout << "Could not open file " << outputFile << endl;
    //return 1;
  }

  // Write to file
  string outPut1 = "Hello";
  std::string outPut2 = "1 2 3";
  cout << "writing to " <<outputFile << "..." << endl;
  outFS << outPut1 << endl;
  for (std::size_t i = 0; i < outPut2.length(); ++i) {
    outFS << outPut2[i];
  }

  outFS << outPut2 << endl;
  //Done with file, so close
  outFS.close();
}

int main(int argc, char** argv) {

  readFromFile("myfile.txt");
  writeToFile("myoutputfile.txt");
  return 0;
}
