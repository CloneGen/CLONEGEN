int main () {
    int mat [5] [5];
    int maxh [5] = {0}, l [5], minl [5] = {100000, 100000, 100000, 100000, 100000}, h [5];
    for (int i = 0;
    i < 5; i++) {
        for (int j = 0;
        j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] >= maxh[i]) {
                maxh[i] = mat[i][j];
                l[i] = j;
            }
            if (mat[i][j] <= minl[j]) {
                minl[j] = mat[i][j];
                h[j] = i;
            }
        }
    }
    int tag = 0;
    for (int k = 0;
    k < 5; k++) {
        if (h[l[k]] == k) {
            cout << k + 1 << ' ' << l[k] + 1 << ' ' << mat[k][l[k]] << endl;
            tag++;
        }
    }
    if (!tag) {
        cout << "not found" << endl;
    }
    return 0;
}

