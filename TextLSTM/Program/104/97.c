int a (int x, int i) {
    if (i == 1)
        return x;
    else
        return a (x, i - 1) / 2;
}

int main () {
    int x, y;
    cin >> x >> y;
    int xline [100], yline [100];
    int i = 1;
    do {
        xline[i] = a (x, i);
        i++;
    }
    while (a (x, i));
    int j = 1;
    do {
        yline[j] = a (y, j);
        j++;
    }
    while (a (y, j));
    for (j--, i--; yline[j] == xline[i] && j >= 1 && i >= 1; j--, i--)
        ;
    cout << xline[++i];
    return 0;
}

