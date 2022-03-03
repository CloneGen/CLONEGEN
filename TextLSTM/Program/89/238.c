int sta [10000];

int main () {
    int n, x, y;
    cin >> n;
    while (1) {
        cin >> x >> y;
        if (!x && !y)
            break;
        else
            ++sta[y];
    }
    int i;
    for (i = 0; i != n; ++i) {
        if (sta[i] == n - 1) {
            cout << i << endl;
            break;
        }
    }
    if (i == n)
        cout << "NOT FOUND" << endl;
    return 0;
}

