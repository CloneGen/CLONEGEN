int total (int apple, int basket);
int noempty (int apple, int basket);
int withempty (int apple, int basket);

int main () {
    int t, m, n;
    cin >> t;
    for (int i = 1;
    i <= t; i++) {
        cin >> m >> n;
        cout << total (m, n) << endl;
    }
}

int total (int apple, int basket) {
    return withempty (apple, basket) + noempty (apple, basket);
}

int noempty (int apple, int basket) {
    if (apple < basket)
        return 0;
    else if (apple == basket)
        return 1;
    else
        return total (apple - basket, basket);
}

int withempty (int apple, int basket) {
    if (basket <= 1)
        return 0;
    else
        return total (apple, basket - 1);
}

