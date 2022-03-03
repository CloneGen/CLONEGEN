int a [100] [20] = {0};
int i = 1;
int b [100] = {0};
void sort ();
void compare ();

int main () {
    int p = 0;
    int j = 0;
    do {
        j = 1;
        do {
            cin >> a[i][j];
            j++;
        }
        while ((a[i][j - 1] != 0) && (a[i][j - 1] != -1));
        i++;
    }
    while (a[i - 1][j - 1] != -1);
    sort ();
    compare ();
    for (p = 1; p <= i - 2; p++) {
        cout << b[p] << endl;
    }
    return 0;
}

void sort () {
    int x = 0;
    int y = 0;
    int p = 0;
    int t = 0;
    for (p = 1; p <= i - 2; p++)
        for (x = 1; x <= 14; x++)
            for (y = 1; y <= 15 - x; y++) {
                if (a[p][y] > a[p][y + 1]) {
                    t = a[p][y];
                    a[p][y] = a[p][y + 1];
                    a[p][y + 1] = t;
                }
            }
}

void compare () {
    int x = 0;
    int y = 0;
    int p = 0;
    for (p = 1; p <= i - 2; p++)
        for (x = 1; x <= 15; x++)
            for (y = x; y <= 15; y++) {
                if ((a[p][y] == 2 * a[p][x]) && (a[p][x] != 0))
                    b[p]++;
            }
}

