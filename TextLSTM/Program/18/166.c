int main () {
    int n, r;
    int mat [100] [100];
    cin >> n;
    for (int a = 0;
    a < n; a++) {
        int sum = 0;
        r = n;
        for (int b = 0;
        b < n; b++) {
            for (int c = 0;
            c < n; c++) {
                cin >> mat[b][c];
            }
        }
        for (int d = 0;
        d < n - 1; d++) {
            int minh [100], minl [100];
            for (int d = 0;
            d < r; d++) {
                minh[d] = 9999999;
                minl[d] = 9999999;
            }
            for (int e = 0;
            e < r; e++) {
                for (int f = 0;
                f < r; f++) {
                    if (minh[e] > mat[e][f]) {
                        minh[e] = mat[e][f];
                    }
                }
            }
            for (int g = 0;
            g < r; g++) {
                for (int h = 0;
                h < r; h++) {
                    mat[g][h] -= minh[g];
                }
            }
            for (int e = 0;
            e < r; e++) {
                for (int f = 0;
                f < r; f++) {
                    if (minl[f] > mat[e][f]) {
                        minl[f] = mat[e][f];
                    }
                }
            }
            for (int g = 0;
            g < r; g++) {
                for (int h = 0;
                h < r; h++) {
                    mat[g][h] -= minl[h];
                }
            }
            sum += mat[1][1];
            for (int g = 1;
            g < r - 1; g++) {
                for (int h = 0;
                h < r; h++) {
                    mat[g][h] = mat[g + 1][h];
                }
            }
            for (int h = 1;
            h < r - 1; h++) {
                for (int g = 0;
                g < r - 1; g++) {
                    mat[g][h] = mat[g][h + 1];
                }
            }
            r--;
        }
        cout << sum << endl;
    }
    return 0;
}

