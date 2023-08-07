#include <iostream>

using namespace std;

string p = "p";
string m = "z";

string world[15][15] = {
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, "sus", m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, "p", m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
    {m, m, m, m, m, m, m, m, m, m, m, m, m, m, m},
};

void draw() {
  string output;
  for (int y = 0; y < 16; y = y + 1) {
    output = "";
    for (int x = 10; x < 16; x = x + 1) {
      output += world[x][y];
    }
    cout << output << "\n";
  }
}

int main() {
  char c;
  // Set the terminal to raw mode
  while (1) {
    system("stty raw");
    c = getchar();
    // terminate when "." is pressed
    system("stty cooked");
    system("clear");
    cout << c << " was pressed." << endl;
    if (c == 'w') {
      draw();
    } else {
      draw();
    }
    if (c == '.') {
      system("stty cooked");
      exit(0);
    }
  }
}
