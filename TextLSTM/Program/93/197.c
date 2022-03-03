int main () {
    int num, i, a [3];
    cin >> num;
    i = 0;
    if (num % 3 == 0) {
        a[i] = 3;
        i++;
    }
    if (num % 5 == 0) {
        a[i] = 5;
        i++;
    }
    if (num % 7 == 0) {
        a[i] = 7;
        i++;
    }
    i--;
    if (i == -1)
        cout << "n";
    else {
        for (int j = 0;
        j <= i; j++) {
            cout << a[j];
            if (j < i)
                cout << " ";
        }
    }
    return 0;
}

