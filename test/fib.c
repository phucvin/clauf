int fib(int n) {
    return n < 2 ? n : fib(n-1) + fib(n-2);
}

int main() {
    __clauf_assert(fib(40) == 102334155);
    return 0;
}