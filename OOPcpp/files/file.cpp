#include <iostream>
#include <fstream>// this library allows us working on files

using namespace std;

int main() {
    //creating a file
    ofstream MyFile("first.txt");

    //writes into file
    MyFile << "My first c++ file";

    //closes the file
    MyFile.close();

    //Creating a string to read from the file

    string text;
    // specifying the file
    ifstream ReadFile("first.txt");
    //using while to read the file

    while(getline(ReadFile, text)) {
        cout << text << endl;
    }
    //getline() function (which belongs to the ifstream class) to read the file line by line.


    //CLOSE THE FILE
    ReadFile.close();
    return 0;
}
