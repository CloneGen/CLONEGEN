int app = 0;
int see (double mon, int n, int k);

int main () {
    int mon, k;
    cin >> mon >> k;
    cout << see (mon, mon, k) - (mon - 1) * k << endl;
    return 0;
}

int see (double mon, int n, int k) {
    if (n == 1)
        return ((pow ((mon - 1), (mon - 1))) * mon);
    else
        app = see (mon, n - 1, k) / (mon - 1) * mon;
    return app;
}

