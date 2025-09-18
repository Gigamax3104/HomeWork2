#include	<iostream>
#include	<cstdlib>
#include	<ctime>
using namespace std;

enum Management {
	G = 0,
	C = 1,
	P = 2,
};

enum Management2 {
	Win = 3,
	Lose = 4,
	Draw = 5,
};

Management2 management2(const Management P1, const Management P2) {
	return(P1 == G && P2 == C) || (P1 == C && P2 == P) || (P1 == P && P2 == G) ? Win :
		((P1 == C && P2 == G) || (P1 == P && P2 == C) || (P1 == G && P2 == P)) ? Lose : Draw;
}

Management management(char Player) {

}

int main() {

