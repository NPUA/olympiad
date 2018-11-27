#include "stdafx.h"
#include <iostream>

using namespace std;

void init(int[][100], int, int);
void shipDirs(int[][100], int, int, int, int, int);
void elephDirs(int[][100], int, int, int, int, int);
void queenDirs(int[][100], int, int, int, int, int);

int main() {
	int n, m, k, t, a, b;
	int board[100][100];
	do cin >> n; while (n < 1 || n > 100);
	do cin >> m; while (m < 1 || m > 100);
	init(board, n, m);
	do cin >> k; while (k < 1 || k > 10);
	while (k--) {
		do cin >> t; while (t < 1 || t > 3);
		do cin >> a; while (a < 1 || a > n);
		do cin >> b; while (b < 1 || b > m);
		board[a - 1][b - 1] = t;
		if (t == 1) shipDirs(board, n, m, t, a - 1, b - 1);
		else if (t == 2) elephDirs(board, n, m, t, a - 1, b - 1);
		else queenDirs(board, n, m, t, a - 1, b - 1);
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!board[i][j]) count++;
	cout << count << endl;
}

void init(int board[][100], int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			board[i][j] = 0;
}

void shipDirs(int board[][100], int n, int m, int t, int a, int b) {
	for (int i = 0; i < n; i++)
		if (i != a)
			board[i][b] = 4;
	for (int j = 0; j < m; j++)
		if (j != b)
			board[a][j] = 4;
}

void elephDirs(int board[][100], int n, int m, int t, int a, int b) {
	for (int i = 1; i < n * m; i++) {
		if (a - 1 >= 0 && b - i >= 0)
			board[a - i][b - i] = 4;
		if (a - 1 >= 0 && b + i < m)
			board[a - i][b + i] = 4;
		if (a + 1 < n && b - i >= 0)
			board[a + i][b - i] = 4;
		if (a + 1 < n && b + i < m)
			board[a + i][b + i] = 4;
	}
}

void queenDirs(int board[][100], int n, int m, int t, int a, int b) {
	shipDirs(board, n, m, t, a, b);
	elephDirs(board, n, m, t, a, b);
}