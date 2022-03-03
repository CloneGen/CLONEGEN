const  int AMAX = 20;

int main () {
    int fib [AMAX +1];
    fib[1] = fib[2] = 1;
    for (int i = 3;
    i <= AMAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n, a;
    cin >> n;
    while (n--) {
        cin >> a;
        cout << fib[a] << endl;
    }
    return 0;
}

