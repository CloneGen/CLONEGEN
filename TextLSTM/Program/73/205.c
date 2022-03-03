int main () {
    int matrix [6] [6], point [6] [6] = {0}, i, j, k, min, max, max_row = 0, min_col = 0, point_ok = 0;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            cin >> matrix[i][j];
        }
    }
    for (i = 1; i <= 5; i++) {
        max = matrix[i][1];
        max_row = 1;
        for (j = 2; j <= 5; j++) {
            if (matrix[i][j] > max) {
                max_row = j;
                max = matrix[i][j];
            }
        }
        point[i][max_row]++;
    }
    for (j = 1; j <= 5; j++) {
        min = matrix[1][j];
        min_col = 1;
        for (i = 2; i <= 5; i++) {
            if (matrix[i][j] < min) {
                min_col = i;
                min = matrix[i][j];
            }
        }
        point[min_col][j]++;
    }
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (point[i][j] == 2) {
                cout << i << " " << j << " " << matrix[i][j] << endl;
                point_ok++;
            }
        }
    }
    if (!point_ok) {
        cout << "not found" << endl;
    }
    return 0;
}

