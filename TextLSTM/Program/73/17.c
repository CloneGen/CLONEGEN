int main () {
    int array [5] [5];
    for (int i = 0;
    i <= 4; i++)
        for (int j = 0;
        j <= 4; j++)
            cin >> array[i][j];
    int g = 0, k = 0;
    int lie = 0;
    int hang = 0;
    for (int i = 0;
    i <= 4; i++) {
        int max = 0;
        for (int j = 0;
        j <= 4; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                lie = j;
            }
        }
        if ((array[0][lie] >= max) && (array[1][lie] >= max) && (array[2][lie] >= max) && (array[3][lie] >= max) && (array[4][lie] >= max)) {
            for (k = 0; k <= 4; k++)
                if (array[k][lie] == max)
                    hang = k;
            cout << hang + 1 << " " << lie + 1 << " " << array[hang][lie];
            g = 1;
        }
    }
    if (g == 0)
        cout << "not found";
    return 0;
}

