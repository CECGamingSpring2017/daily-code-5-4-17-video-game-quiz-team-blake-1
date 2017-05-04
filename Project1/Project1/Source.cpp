#include<iostream>
#include<string>

using namespace std;
int main() {
	int senatorpalpatine = 0;
	int lukeskywalker = 0;
	int obiwankenobi = 0;
	char input;

	cout << " Are you good with politics?? Yes(y) No(n), maybe(m)" << endl;
	cin >> input;
	if (input == 'y') {
		senatorpalpatine = senatorpalpatine + 1;
	}
	else if (input == 'm') {
		obiwankenobi = obiwankenobi + 1;
	}
	else if (input=='n'){
		lukeskywalker = lukeskywalker + 1;
	}
	cout << "Do you like to take complete control over anything? Y/N/M" << endl;
	cin >> input;
	if (input == 'y') {
		senatorpalpatine = senatorpalpatine + 1;
	}
	else if (input=='m'){
		lukeskywalker = lukeskywalker + 1;
	}
	else if (input == 'n') {
		obiwankenobi = obiwankenobi + 1;
	}
	cout << "Do you want to have kids??Y/N" << endl;
	cin >> input;
	if (input == 'n') {
		senatorpalpatine = senatorpalpatine + 1;
	}
	else if (input=='m'){
		obiwankenobi = obiwankenobi + 1;
	}
	else if (input == 'y') {
		lukeskywalker = lukeskywalker = 1;
	}

	cout << endl << endl;

	
	if ((lukeskywalker > senatorpalpatine) && (lukeskywalker > obiwankenobi)) {
		cout << "you would be luke skywalker" << endl;
	}

	else if ((senatorpalpatine > lukeskywalker) && (senatorpalpatine > obiwankenobi)) {
		cout << "you would be senator palpentine" << endl;
	}
	else if ((obiwankenobi > lukeskywalker) && (obiwankenobi > senatorpalpatine)) {
		cout << "you would be obi wan kenobi" << endl;
	}

}
