int foo(int a, int b) {
	int c=0;
	for (int i=1;i<=a;++i)
		c+=b;
	return c;
}
int client(int x) {
	if (x>=5 && x<7)
		return foo(x,5);
	return 0;
}