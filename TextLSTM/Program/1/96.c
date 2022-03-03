int k, a;

void find (int i, int x) {
    for (int j = i;
    j * j <= x && i != 1; j++)
        if (x / j * j == x) {
            find (j, x / j);
            k++;
        }
}

int main () {
    int n;
    for (cin >> n; n--;) {
        k = 0;
        cin >> a;
        find (2, a);
        cout << ++k << endl;
    }
    return 0;
}

