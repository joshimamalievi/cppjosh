#include <iostream>
#include <fstream>// this library allows us working on files

using namespace std;

int main() {
    //creating a file
    ofstream MyFile("queue.cpp");

    //writes into file
    MyFile << "#include <iostream>\n\nusing namespace std;\n\nint main() {\n\n\treturn 0;\n}";

    //closes the file
    MyFile.close();
    return 0;
}
