#include <unistd.h>
#define P(x) write(1, x, sizeof(x))
int main(void) {
  P("Hello, World\n");
  return 0;
}
