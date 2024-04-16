#include <bits/stdc++.h>
#define optimize                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define endl '\n'
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int>
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long

using namespace std;

string puzzle;

int findFirst() {
  for (int i = 0; i < puzzle.size(); i++) {
    if (isdigit(puzzle[i])) {
      return puzzle[i] - '0';
    }
  }
  return -1;
}

int findLast() {
  for (int i = puzzle.size() - 1; i >= 0; i--) {
    if (isdigit(puzzle[i])) {
      return puzzle[i] - '0';
    }
  }
  return -1;
}

int value() {
  int result = 0;

  int first = findFirst();
  int last = findLast();

  if (first == last && first != -1) {
    result = 11 * first;
  } else if (first != last && last != -1 && first != -1) {
    result = 10 * first + last;
  } else {
    result = 0;
  }

  return result;
}

int main() {
  long long totalResult = 0;
  cout << "Set the puzzle input:";

  for( int i = 0 ; i < 4 ; i++ ) {
    cin >> puzzle;
    int result = value();
    totalResult += result;
  }
  

  cout << "The result is: " << totalResult << endl;

  return 0;
}