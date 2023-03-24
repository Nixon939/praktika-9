#include <stdio.h>

void handleKeyPress(int key) {
  const char *message;
  switch (key) {
    case 1:
      message = "Yes";
      break;
    case 2:
      message = "No";
      break;
    case 3:
      message = "Cancel";
      break;
    default:
      message = "Unknown key";
      break;
  }
  printf("%s\n", message);
}

int main() {
  // Example usage: simulate key press 2
  int key = 2;
  handleKeyPress(key);
  return 0;
}
