// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	char** shape = new char* [N];
	for (int i = 0; i < N; i++)
		shape[i] = new char[M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> shape[i][j];
	}
	int p1, p2;
	cin >> p1 >> p2;
	p1--; 
	p2--;
	int counter = 0;
	int round = 0;
	for (int i = -1; i <= 1; i++) {
		
		for (int j = -1; j <= 1; j++)
		{
			if (p1 + i > N - 1 || p2 + j > M - 1 || p1+i<0 || p2+j<0)
			{
				counter++;
				continue;
			}
			if (shape[p1+i][p2+j] == 'x')
				counter++;
		}
	}

	if (counter ==9)
		cout << "yes";
	else
	{
		if (shape[p1][p2] != 'x' && counter == 8)
			cout << "yes";
		else
		    cout << "no";
	}


	

	return 0;
}
