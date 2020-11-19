void do_math(int x) {
  x = x + 1;
  if (x > 2)
    x++;
  else {
    x += 2;
    x *= 2;
  }
}

int main(void) {
  int val = 4;
  do_math(val);
  return 0;
}