#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

class Level0 {
public:
	int id;
	string name;

	Level0() {
		id = 0;
		name = "No name";
	}

	~Level0() {
		cout << "Object " << name << " deleted.\n";
	}
};

class Level1 {
public:
	int id;
	string name;

	Level1() {
		id = 0;
		name = "No name";
	}

	~Level1() {
		cout << "Object " << name << " deleted.\n";
	}
};

class Level2 {
public:
	int id;
	string name;
	vector < vector<int>> connections;

	Level2() {
		id = 0;
		name = "No name";
	}

	~Level2() {
		cout << "Object " << name << " deleted.\n";
	}
};

class Level3 {
public:
	int id;
	string name;
	vector < vector<int>> connections;

	Level3() {
		id = 0;
		name = "No name";
	}

	~Level3() {
		cout << "Object " << name << " deleted.\n";
	}
};

class Level4 {
public:
	int id;
	string name;
	vector < vector<int>> connections;

	Level4() {
		id = 0;
		name = "No name";
	}

	~Level4() {
		cout << "Object " << name << " deleted.\n";
	}
};

class Level5 {
public:
	int id;
	string name;
	vector < vector<int>> connections;

	Level5() {
		id = 0;
		name = "No name";
	}

	~Level5() {
		cout << "Object " << name << " deleted.\n";
	}
};

void enterlevels0(vector<Level0>* levels0, int k) {
	for (int i = 0; i < k; i++) {
		cin >> (*levels0)[i].id;
		getline(cin, (*levels0)[i].name);
	}
}

void checklevels0(vector<Level0>* levels0, int k) {
	cout << endl << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels0)[i].id << " " << (*levels0)[i].name << endl;
	}
	cout << "-------------------------------" << endl << endl;
}

void enterlevels1(vector<Level1>* levels1, int k) {
	for (int i = 0; i < k; i++) {
		cin >> (*levels1)[i].id;
		getline(cin, (*levels1)[i].name);
	}
}

void checklevels1(vector<Level1>* levels1, int k) {
	cout << endl << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels1)[i].id << " " << (*levels1)[i].name << endl;
	}
	cout << "-------------------------------" << endl << endl;
}

void enterlevels2(vector<Level2>* levels2, int k) {
	char c = ' '; //вспомогательный символ для ввода
	int t = 1; //количество зависимостей
	int n = 1; //количевтво альтернативных курсов в зависимости

	for (int i = 0; i < k; i++) {
		cin >> (*levels2)[i].id;
		getline(cin, (*levels2)[i].name);
		c = getchar();
		if (c == '[') {
			(*levels2)[i].connections.resize(t);
			(*levels2)[i].connections[t - 1].resize(n);
			cin >> (*levels2)[i].connections[t - 1][n - 1];
			c = getchar();
			while (c != ']') {
				if (c == ',') {
					t++;
					n = 1;
					(*levels2)[i].connections.resize(t);
				}
				if (c == '/') {
					n++;
				}
				(*levels2)[i].connections[t - 1].resize(n);
				cin >> (*levels2)[i].connections[t - 1][n - 1];
				c = getchar();
			}
			t = 1;
			n = 1;
		}
		if (c == '\n') {
			(*levels2)[i].connections.resize(1);
			(*levels2)[i].connections[0].resize(1);
			(*levels2)[i].connections[0][0] = 0;
		}
	}
}

void checklevels2(vector<Level2>* levels2, int k) {
	cout << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels2)[i].id << " " << (*levels2)[i].name;
		if ((*levels2)[i].connections[0][0] == 0) {
			cout << endl;
		}
		else {
			cout << " [";
			for (int j = 0; j < (*levels2)[i].connections.size(); j++) {
				for (int l = 0; l < (*levels2)[i].connections[j].size(); l++) {
					cout << (*levels2)[i].connections[j][l];
					if (l != (*levels2)[i].connections[j].size() - 1) {
						cout << "/";
					}
				}
				if (j != (*levels2)[i].connections.size() - 1) {
					cout << ", ";
				}
			}
			cout << "]" << endl;
		}
	}
	cout << "-------------------------------" << endl << endl;
}

void enterlevels3(vector<Level3>* levels3, int k) {
	char c = ' '; //вспомогательный символ для ввода
	int t = 1; //количество зависимостей
	int n = 1; //количевтво альтернативных курсов в зависимости

	for (int i = 0; i < k; i++) {
		cin >> (*levels3)[i].id;
		getline(cin, (*levels3)[i].name);
		c = getchar();
		if (c == '[') {
			(*levels3)[i].connections.resize(t);
			(*levels3)[i].connections[t - 1].resize(n);
			cin >> (*levels3)[i].connections[t - 1][n - 1];
			c = getchar();
			while (c != ']') {
				if (c == ',') {
					t++;
					n = 1;
					(*levels3)[i].connections.resize(t);
				}
				if (c == '/') {
					n++;
				}
				(*levels3)[i].connections[t - 1].resize(n);
				cin >> (*levels3)[i].connections[t - 1][n - 1];
				c = getchar();
			}
			t = 1;
			n = 1;
		}
		if (c == '\n') {
			(*levels3)[i].connections.resize(1);
			(*levels3)[i].connections[0].resize(1);
			(*levels3)[i].connections[0][0] = 0;
		}
	}
}

void checklevels3(vector<Level3>* levels3, int k) {
	cout << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels3)[i].id << " " << (*levels3)[i].name;
		if ((*levels3)[i].connections[0][0] == 0) {
			cout << endl;
		}
		else {
			cout << " [";
			for (int j = 0; j < (*levels3)[i].connections.size(); j++) {
				for (int l = 0; l < (*levels3)[i].connections[j].size(); l++) {
					cout << (*levels3)[i].connections[j][l];
					if (l != (*levels3)[i].connections[j].size() - 1) {
						cout << "/";
					}
				}
				if (j != (*levels3)[i].connections.size() - 1) {
					cout << ", ";
				}
			}
			cout << "]" << endl;
		}
	}
	cout << "-------------------------------" << endl << endl;
}

void enterlevels4(vector<Level4>* levels4, int k) {
	char c = ' '; //вспомогательный символ для ввода
	int t = 1; //количество зависимостей
	int n = 1; //количевтво альтернативных курсов в зависимости

	for (int i = 0; i < k; i++) {
		cin >> (*levels4)[i].id;
		getline(cin, (*levels4)[i].name);
		c = getchar();
		if (c == '[') {
			(*levels4)[i].connections.resize(t);
			(*levels4)[i].connections[t - 1].resize(n);
			cin >> (*levels4)[i].connections[t - 1][n - 1];
			c = getchar();
			while (c != ']') {
				if (c == ',') {
					t++;
					n = 1;
					(*levels4)[i].connections.resize(t);
				}
				if (c == '/') {
					n++;
				}
				(*levels4)[i].connections[t - 1].resize(n);
				cin >> (*levels4)[i].connections[t - 1][n - 1];
				c = getchar();
			}
			t = 1;
			n = 1;
		}
		if (c == '\n') {
			(*levels4)[i].connections.resize(1);
			(*levels4)[i].connections[0].resize(1);
			(*levels4)[i].connections[0][0] = 0;
		}
	}
}

void checklevels4(vector<Level4>* levels4, int k) {
	cout << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels4)[i].id << " " << (*levels4)[i].name;
		if ((*levels4)[i].connections[0][0] == 0) {
			cout << endl;
		}
		else {
			cout << " [";
			for (int j = 0; j < (*levels4)[i].connections.size(); j++) {
				for (int l = 0; l < (*levels4)[i].connections[j].size(); l++) {
					cout << (*levels4)[i].connections[j][l];
					if (l != (*levels4)[i].connections[j].size() - 1) {
						cout << "/";
					}
				}
				if (j != (*levels4)[i].connections.size() - 1) {
					cout << ", ";
				}
			}
			cout << "]" << endl;
		}
	}
	cout << "-------------------------------" << endl << endl;
}

void enterlevels5(vector<Level5>* levels5, int k) {
	char c = ' '; //вспомогательный символ для ввода
	int t = 1; //количество зависимостей
	int n = 1; //количевтво альтернативных курсов в зависимости

	for (int i = 0; i < k; i++) {
		cin >> (*levels5)[i].id;
		getline(cin, (*levels5)[i].name);
		c = getchar();
		if (c == '[') {
			(*levels5)[i].connections.resize(t);
			(*levels5)[i].connections[t - 1].resize(n);
			cin >> (*levels5)[i].connections[t - 1][n - 1];
			c = getchar();
			while (c != ']') {
				if (c == ',') {
					t++;
					n = 1;
					(*levels5)[i].connections.resize(t);
				}
				if (c == '/') {
					n++;
				}
				(*levels5)[i].connections[t - 1].resize(n);
				cin >> (*levels5)[i].connections[t - 1][n - 1];
				c = getchar();
			}
			t = 1;
			n = 1;
		}
		if (c == '\n') {
			(*levels5)[i].connections.resize(1);
			(*levels5)[i].connections[0].resize(1);
			(*levels5)[i].connections[0][0] = 0;
		}
	}
}

void checklevels5(vector<Level5>* levels5, int k) {
	cout << "check---------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << (*levels5)[i].id << " " << (*levels5)[i].name;
		if ((*levels5)[i].connections[0][0] == 0) {
			cout << endl;
		}
		else {
			cout << " [";
			for (int j = 0; j < (*levels5)[i].connections.size(); j++) {
				for (int l = 0; l < (*levels5)[i].connections[j].size(); l++) {
					cout << (*levels5)[i].connections[j][l];
					if (l != (*levels5)[i].connections[j].size() - 1) {
						cout << "/";
					}
				}
				if (j != (*levels5)[i].connections.size() - 1) {
					cout << ", ";
				}
			}
			cout << "]" << endl;
		}
	}
	cout << "-------------------------------" << endl << endl;
}

int main() {
	int k;
	vector<Level0> levels0;
	vector<Level1> levels1;
	vector<Level2> levels2;
	vector<Level3> levels3;
	vector<Level4> levels4;
	vector<Level5> levels5;

	//ввод таблицы (количество курсов в уровне + список курсов со всей нобходимой информацией)
	
	//ввод курсов 0 уровня
	cin >> k; //ввод количетсва курсов 0 уровня
	levels0.resize(k);
	//ввод курсов
	enterlevels0(&levels0, k);
	//проверка ввода
	checklevels0(&levels0, k);


	//ввод курсов 1 уровня
	cin >> k; //ввод количетсва курсов 1 уровня
	levels1.resize(k);
	//ввод курсов
	enterlevels1(&levels1, k);
	//проверка ввода
	checklevels1(&levels1, k);


	//ввод курсов 2 уровня
	cin >> k; //ввод количетсва курсов 2 уровня
	levels2.resize(k);
	//ввод курсов
	enterlevels2(&levels2, k);
	//проверка ввода
	checklevels2(&levels2, k);


	//ввод курсов 3 уровня
	cin >> k; //ввод количетсва курсов 3 уровня
	levels3.resize(k);
	//ввод курсов
	enterlevels3(&levels3, k);
	//проверка ввода
	checklevels3(&levels3, k);


	//ввод курсов 4 уровня
	cin >> k; //ввод количетсва курсов 4 уровня
	levels4.resize(k);
	//ввод курсов
	enterlevels4(&levels4, k);
	//проверка ввода
	checklevels4(&levels4, k);

	//ввод курсов 5 уровня
	cin >> k; //ввод количетсва курсов 4 уровня
	levels5.resize(k);
	//ввод курсов
	enterlevels5(&levels5, k);
	//проверка ввода
	checklevels5(&levels5, k);

	return 0;
}