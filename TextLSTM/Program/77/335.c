void Paidui (char [], int);

int main () {
    int i, j, k;
    char a [1000];
    cin.getline (a, 1000);
    for (i = 1; a[i] != '\0'; i++) {
        if (a[i] == a[0])
            a[i] = 1;
        else
            a[i] = 2;
    }
    a[0] = 1;
    Paidui (a, 0);
    return 0;
}

void Paidui (char b [], int j) {
    if (b[j] == 2) {
        int k;
        for (k = j - 1; k >= 0; k--) {
            if (b[k] == 1) {
                cout << k << " " << j << endl;
                b[k] = 0;
                b[j] = 0;
                break;
            }
        }
    }
    if (b[0] == 0)
        return;
    Paidui (b, j + 1);
}

