struct  people {
    int x;
    int y;
}
p;

int main () {
    int i, n, a [10000] = {0}, t = 0;
    cin >> n;
    while (1) {
        cin >> p.x >> p.y;
        if (p.x == 0 && p.y == 0)
            break;
        if (p.x != p.y)
            a[p.x] = 10000;
        a[p.y] += 1;
    }
    for (i = 0; i < 10000; i++) {
        if (a[i] == n - 1) {
            cout << i << endl;
            t = 1;
            break;
        }
    }
    if (t == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

