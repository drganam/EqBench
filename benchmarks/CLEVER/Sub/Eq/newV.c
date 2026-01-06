int foo(int a, int b) {
	int c=b-a;
	return c;
}
int client() {
	return foo(900,5);
}