int main () {
    int N;
    cin >> N;
    int array [N];
    for (int i = 0;
    i <= N -1; i++)
        cin >> array[i];
    int g = 0;
    int odd [N];
    for (int i = 0;
    i <= N -1; i++) {
        if (array[i] % 2 == 1) {
            g += 1;
            odd[g] = array[i];
        }
    }
    for (int i = 1;
    i <= g - 1; i++)
        for (int j = 1;
        j <= g - i; j++) {
            int t = 0;
            if (odd[j] > odd[j + 1]) {
                t = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = t;
            }
        }
    for (int i = 1;
    i <= g; i++) {
        if (i == 1)
            cout << odd[i];
        else
            cout << "," << odd[i];
    }
    return 0;
}

