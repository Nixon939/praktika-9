#include <stdio.h>

void handleKeyPress(int key) {
  switch (key) {
    case 1:
      printf("Yes\n");
      break;
    case 2:
      printf("No\n");
      break;
    case 3:
      printf("Cancel\n");
      break;
    default:
      printf("Unknown key\n");
      break;
  }
}

int main() {
  // Example usage: simulate key press 2
  int key = 2;
  handleKeyPress(key);
  return 0;
}
