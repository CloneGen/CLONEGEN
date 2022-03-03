int main () {
    int m = 0, i = 3, j = 0;
    cin >> m;
    if (m % 3 == 0 || m % 5 == 0 || m % 7 == 0) {
        while (i < 8) {
            if (m % i == 0) {
                j = j + 1;
                if (j == 1)
                    cout << i;
                else if (j == 2 || j == 3)
                    cout << " " << i;
            }
            i = i + 2;
        }
    }
    else
        cout << "n" << endl;
    return 0;
}

