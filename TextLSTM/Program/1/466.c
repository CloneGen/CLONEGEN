int answer = 0;

void f (int n, int N) {
    if (n < N)
        N = n;
    if (N == 1) {
        answer++;
        return;
    }
    while (N > 1) {
        if (n % N == 0)
            f (n / N, N);
        N--;
    }
}

int main () {
    int n, a;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a;
        f (a, a);
        cout << answer << endl;
        answer = 0;
    }
    return 0;
}

