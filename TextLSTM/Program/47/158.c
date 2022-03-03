int main () {
    int n = 0;
    cin >> n;
    int *point = NULL;
    int a [100];
    point = a;
    for (int i = 0;
    i < n; i++) {
        cin >> point[i];
    }
    for (point = a + n - 1; point >= a; point--) {
        if (point == a) {
            cout << *point;
        }
        else {
            cout << *point << " ";
        }
    }
    return 0;
}

