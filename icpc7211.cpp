//
// Created by Jesse on 12/3/2015.
//

#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

/*Yeah, I know this is really simple, hopefully its worth a few points.*/
void readData (istream& input) {
    int realType = 0;
    while (input >> realType) {
        int guess = 0;
        int countCorrect = 0;
        for (int i = 0; i < 5; i++) {
            input >> guess;
            if (realType == guess ) {
                countCorrect++;
            }
        }
        cout << countCorrect << endl;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    string testData = "1\n"
            "1 2 3 2 1\n"
            "3\n"
            "4 1 1 2 1";

    istringstream data (testData);
#else
    istream& data = cin;
#endif
    readData(data);

}