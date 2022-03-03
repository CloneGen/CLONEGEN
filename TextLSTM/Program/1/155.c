int calc (int a, int b) {
    if (a * a > b)
        return 1;
    if (b % a == 0)
        return (calc (a, b / a) + calc (a + 1, b));
    return calc (a + 1, b);
}

int main (int argc, const  char *argv []) {
    int n, a;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a;
        cout << calc (2, a) << endl;
    }
    return 0;
}

