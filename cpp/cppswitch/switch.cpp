#include <iostream>

using namespace std;

int main() {
    int day;
    cout << "A: What day is it??\nDay Value: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "You: Monday.\n";
            cout << "A: Want to go out on Tuesday?\n";
            break;
        case 2:
            cout << "You: Tuesday.\n";
            cout << "A: Want to go out on Wednesday?\n";
            break;
        case 3:
            cout << "You: Wednesday.\n";
            cout << "A: Want to go out on Thursday?\n";
            break;
        case 4:
            cout << "You: Thursday.\n";
            cout << "A: Want to go out on Friday?\n";
            break;
        case 5:
            cout << "You: Friday.\n";
            cout << "A: Want to go out on Saturday?\n";
            break;
        case 6:
            cout << "You: Saturday.\n";
            cout << "A: Want to go out on Sunday?\n";
            break;
        case 7:
            cout << "You: Sunday.\n";
            cout << "A: Want to go out on Monday?\n";
            break;
        default:
            cout << "A: That's not a valid day of the week!\n";
    }

    return 0;
}
