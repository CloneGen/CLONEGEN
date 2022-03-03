int main () {
    int n;
    cin >> n;
    int array [n];
    for (int i = 0;
    i <= n - 1; i++)
        cin >> array[i];
    cout << array[0];
    for (int i = 1;
    i <= n - 1; i++) {
        int g = 0;
        for (int j = 0;
        j <= i - 1; j++)
            if (array[i] == array[j])
                g = g + 1;
        if (g == 0)
            cout << " " << array[i];
    }
    return 0;
}

