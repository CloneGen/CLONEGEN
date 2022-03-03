int main () {
    int array [20];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2;
    i < 20; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    int n = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        int p = 0;
        cin >> p;
        cout << array[p - 1] << endl;
    }
    return 0;
}

