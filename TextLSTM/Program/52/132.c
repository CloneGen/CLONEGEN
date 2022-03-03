int main () {
    void move (int *, int, int);
    int number [20], n, m, i;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> number[i];
    move (number, n, m);
    cout << endl;
    return 0;
}

void move (int *array, int n, int m) {
    if (m == 0) {
        for (int i = 0;
        i < n - 1; i++)
            cout << *(array + i) << ' ';
        cout << *(array + n - 1) << endl;
        return;
    }
    else {
        int *p, array_end;
        array_end = *(array + n - 1);
        for (p = array + n - 1; p > array; p--)
            *p = *(p - 1);
        *array = array_end;
        move (array, n, m - 1);
    }
}

