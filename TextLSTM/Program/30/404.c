int main () {
    int n, Sum = 0;
    cin >> n;
    for (int i = 0;
    i != n + 1; i++) {
        int a = (i / 10), b = i - 10 * a;
        if ((i % 7 != 0) & (a != 7) & (b != 7))
            Sum += i * i;
    }
    cout << Sum << endl;
    return 0;
}

