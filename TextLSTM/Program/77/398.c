char a [10000];
int function (int);

int main () {
    int i, j;
    cin.getline (a, 10000);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != a[0]) {
            j = function (i - 1);
            cout << j << " " << i << endl;
            a[j] = a[i];
        }
    }
    return 0;
}

int function (int j) {
    if (a[j] == a[0]) {
        return j;
    }
    else {
        return function (j - 1);
    }
}

