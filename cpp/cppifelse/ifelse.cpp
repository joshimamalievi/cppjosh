#include <iostream>

using namespace std;

int main(){
    int x;
    int legalAge = 18;
    cout << "Bouncer: WHAT YO AGE??\nYou:" << endl;
    cin >> x;
    if(legalAge<x) {
        cout << "Bouncer: Why are you lying you look like a newborn. GETOUTTTT \n"<< "*KICKS THE SHIT OUT OF YOU* \n";
    }else if(x<legalAge) {
        cout << "Bouncer: GETOUTTTT\n" << "*SEEMINGLY REALLY MAD*" << endl;
    }

    //SHORT HAND

    string result = (legalAge > x) ? "Bouncer: WEHRE ARE YOUR PARENTSS???!?!?!?!?!?!" : "Bouncer: DONT EVER COME BACK";
    cout << result;

}
