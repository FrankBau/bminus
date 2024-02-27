// FBL 2024-02-26

main() {
    int n;
    int k;
    while(n < 45) {
      writei(n);
      write(": ");
      k = fib(n);
      writei(k);
      n = n + 1;
      write("\n");
    }
}

fib(int n)
{
	//printf("%*c fib(%d)\n", 2*n, ' ', n);
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

write(char str[]) {
	int i;

	i = 0;
	while (str[i] != 0) {
		fputc(str[i], stdout);
		i = i + 1;
	}
}

mod(int n, int m) {
  return n - (n/m)*m;
}

writei(int n) {
  char str[16];
  int i;
  i = 0;
  str[i] = '0'+ mod(n, 10);
  i = i + 1;
  n = n / 10;
  while(n > 0) {
    str[i] = '0'+ mod(n, 10);
    i = i + 1;
    n = n / 10;
  }
  while(i > 0) {
    i = i - 1;
    fputc(str[i], stdout);
  }
}
