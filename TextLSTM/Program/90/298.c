int f (int x, int y) {
    int sum = 1;
    if ((y == 1) || (x == 0))
        ;
    else {
        if (x >= y)
            sum = f (x - y, y) + f (x, y - 1);
        else
            sum = f (x, y - 1);
    }
    return sum;
}

int main () {
    int k [100] = {0};
    int a, b, c, t;
    cin >> c;
    for (t = 0; t < c; t++) {
        cin >> a >> b;
        k[t] = f (a, b);
    }
    for (t = 0; t < c; t++) {
        cout << k[t] << endl;
    }
    return 0;
}

