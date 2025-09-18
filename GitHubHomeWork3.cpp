#include	<iostream>
#include	<cstdlib>
#include	<ctime>
using namespace std;

enum Management {
	G = 0,
	C = 1,
	P = 2,
	None = 3,
};

enum Management2 {
	Win = 4,
	Lose = 5,
	Draw = 6,
};

Management2 management2(const Management P1, const Management P2) {
	return(P1 == G && P2 == C) || (P1 == C && P2 == P) || (P1 == P && P2 == G) ? Win :
		((P1 == C && P2 == G) || (P1 == P && P2 == C) || (P1 == G && P2 == P)) ? Lose : Draw;
}

Management management(const char Player) {
	return Player == 'g' ? G :
		Player == 'c' ? C :
		Player == 'p' ? P : None;
}

int main() {
	char a, b;

	cout << "まずは自分の手を入力してください。>" << flush;
	cin >> a;

	Management P1 = management(a);

	cout << "次に相手の手を入力してください。>" << flush;
	cin >> b;

	Management P2 = management(b);

	if (P1 != None && P2 != None) 
	{
		Management2 VictoryOrDefeat = management2(P1, P2);

		if (VictoryOrDefeat == Win) {
			cout << "あなたの勝ちです。" << endl;
		}
		else if (VictoryOrDefeat == Lose) {
			cout << "あなたの負けです。" << endl;
		}
		else {
			cout << "引き分けです。" << endl;
		}
	}
	else {
		cout << "エラーが起きました。" << endl;
	}
}

