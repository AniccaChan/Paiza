#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;
int main(void) {
	// 自分の得意な言語で
	// Let's チャレンジ！！
	map<char, int> cat;
	string str;
	getline(cin, str);
	stringstream ss(str);
	char temp;
	while (ss >> temp) {
		if(cat.count(temp))
		{
			cat[temp]++;
		}
		else
		{
			cat[temp] = 1;
		}
	}
	int ccount = min(min((int)cat['c'],(int)cat['a']),(int)cat['t']);
	int maxccount = max(max((int)cat['c'], (int)cat['a']), (int)cat['t']);
	cout << ccount  << endl;
	cout << maxccount - cat['c']<< endl;
	cout << maxccount - cat['a'] << endl;
	cout << maxccount - cat['t'];

	return 0;
}