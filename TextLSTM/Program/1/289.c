int n, c;

int solutionnumber (int n, int c) {
    if (n == c)
        return 1;
    if (n < c)
        return 0;
    if (n % c == 0)
        return solutionnumber (n / c, c) + solutionnumber (n, c + 1);
    else
        return solutionnumber (n, c + 1);
}

int main () {
    int N, a;
    cin >> N;
    while (N > 0) {
        cin >> a;
        cout << solutionnumber (a, 2) << endl;
        N--;
    }
    return 0;
}

