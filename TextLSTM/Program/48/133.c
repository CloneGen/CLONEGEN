int m, n;
int map [10] [10];
int Breed (int, int, int);

int main () {
    memset (map, 0, sizeof (map));
    cin >> m >> n;
    for (int i = 1;
    i <= 9; i++) {
        cout << Breed (i, 1, n);
        for (int j = 2;
        j <= 9; j++) {
            cout << " " << Breed (i, j, n);
        }
        cout << endl;
    }
    return 0;
}

int Breed (int x, int y, int p) {
    if (p == 0) {
        if (x == 5 && y == 5)
            return m;
        else
            return 0;
    }
    else {
        return Breed (x + 1, y, p - 1) + Breed (x + 1, y + 1, p - 1) + Breed (x, y + 1, p - 1) + Breed (x - 1, y + 1, p - 1) + Breed (x - 1, y, p - 1) + Breed (x - 1, y - 1, p - 1) + Breed (x, y - 1, p - 1) + Breed (x + 1, y - 1, p - 1) + 2 * Breed (x, y, p - 1);
    }
}

