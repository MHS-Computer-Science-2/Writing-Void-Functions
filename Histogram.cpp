#include <iostream>
using namespace std;

//Write your histogram function here


int main() {
	int yesVotes, noVotes;
	cout << "How many people voted yes? ";
	cin >> yesVotes;
	cout << "How many people voted no? ";
	cin >> noVotes;

	cout << endl << endl << "Result of 100 people surveyed: " << endl;
	histogram("Yes", yesVotes);
	histogram("No", noVotes);
	histogram("Undecided", 100 - yesVotes - noVotes);

	system("pause");
}