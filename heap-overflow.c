#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[]) {
  uint8_t* buf = (uint8_t*)malloc(sizeof(uint8_t) * 100);
  buf[100] = 0xff;
  free(buf);

  return 0;
}
