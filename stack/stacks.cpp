#include <iostream>
#include <stack>
using namespace std;


int main() {
    //stack<string> states = {"Washington", "California", "Florida"}; //this is the wrong way of making a stack
    stack<string> states;

    states.push("Washington");
    states.push("California");
    states.push("Florida");

    cout<< states.top();//outputs Florida , the last added

    //removing last element

    states.pop();

	return 0;
}
