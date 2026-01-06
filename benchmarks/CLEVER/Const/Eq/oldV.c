int foo(int a, int b) {
	int c=a+b;
	return c+3;
}
int client() {
	return foo(5,900);
}