// Link problem : https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>

using namespace std;


bool isEvenNumber(int number) {
	return number % 2 == 0 ? true : false;
}

string analysis(int number) {
	if ((isEvenNumber(number)) && (number > 2)) {
		return "YES";
	}
	return "NO";
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);

	int wNumber;
	cin >> wNumber;
	cout << analysis(wNumber);


	return 0;
}