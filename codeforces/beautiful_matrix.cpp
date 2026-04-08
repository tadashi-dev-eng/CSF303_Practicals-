#include <iostream>
  using namespace std;

  int main() {
      int row, col;

      // Find position of 1
      for (int i = 1; i <= 5; i++) {
          for (int j = 1; j <= 5; j++) {
              int x;
              cin >> x;
              if (x == 1) {
                  row = i;
                  col = j;
              }
          }
      }

      // Calculate Manhattan distance to center (3,3)
      int moves = abs(row - 3) + abs(col - 3);
      cout << moves << endl;

      return 0;
  }
