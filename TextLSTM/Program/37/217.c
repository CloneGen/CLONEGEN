int main () {
    char letters [100001];
    int i, j, t, l;
    cin >> t;
    cin.get ();
    for (l = 1; l <= t; l++) {
        int k [100001] = {0}, longs = 0;
        cin.getline (letters, 100001);
        longs = strlen (letters);
        for (i = 0; i < longs; i++)
            if (k[i] == 0) {
                for (j = i + 1; j < longs; j++)
                    if (k[j] == 0)
                        if (letters[i] == letters[j]) {
                            k[i]++;
                            k[j]++;
                        }
                if ((j == longs) && (k[i] == 0)) {
                    cout << letters[i] << endl;
                    break;
                }
            }
        if (i == longs && k[i - 1] != 0)
            cout << "no" << endl;
    }
    return 0;
}

