int foo(int a, int b) {
	const int d=3;
	int c=b+a;
	return c+d;
}
int client() {
	return foo(5,900);
}