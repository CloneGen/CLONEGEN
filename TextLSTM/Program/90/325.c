int method (int, int);
int occupy (int, int);

int main () {
    int M, N, t, i;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        if (M == 0 || N == 0)
            cout << "0" << endl;
        else {
            cout << method (M, N) << endl;
        }
    }
    return 0;
}

int method (int x, int y) {
    if (y == 1 || x == 1) {
        return 1;
    }
    else
        return occupy (x, y) + method (x, y - 1);
}

int occupy (int a, int b) {
    if (a >= b)
        return method (a - b, b);
    else
        return 0;
}

