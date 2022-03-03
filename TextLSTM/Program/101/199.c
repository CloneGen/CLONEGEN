int main () {
    int i, j, k;
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            for (k = 0; k <= 2; k++)
                if ((((j > i) + (k == i)) == 2 - i) && (((i > j) + (i > k)) == 2 - j) && (((k > j) + (j > i)) == 2 - k)) {
                    cout << "BCA" << endl;
                }
        }
    }
    return 0;
}

