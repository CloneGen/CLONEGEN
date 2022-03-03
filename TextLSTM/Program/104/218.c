int s = 0;

int common (int x, int y, int s) {
    if (x == y)
        return x;
    if (x > y) {
        s++;
        return common (x / 2, y, s);
    }
    if (x < y) {
        s++;
        return common (x, y / 2, s);
    }
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << common (a, b, s) << endl;
}

