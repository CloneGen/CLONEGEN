int main () {
    int a [100] [20];
    int num, temp, size, time = 0;
    int i = 0, j = 0, k, l;
    while (cin >> num) {
        time = 0;
        if (num == -1)
            break;
        else if (num != 0) {
            a[i][j] = num;
            j = j + 1;
        }
        else if (num == 0) {
            size = j;
            for (l = 0; l < size; l++)
                for (j = 0; j + 1 < size; j++) {
                    if (a[i][j] > a[i][j + 1]) {
                        temp = a[i][j];
                        a[i][j] = a[i][j + 1];
                        a[i][j + 1] = temp;
                    }
                }
            for (k = 0; k < size; k++)
                for (l = 0; l < size; l++) {
                    if (2 * a[i][k] == a[i][l])
                        time = time + 1;
                }
            cout << time << endl;
            j = 0;
            i = i + 1;
        }
    }
    return 0;
}

