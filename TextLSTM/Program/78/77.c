int main () {
    int a [4], i = 0;
    char A [4] = {'z', 'q', 's', 'l'};
    for (a[0] = 1; a[0] <= 5; a[0]++) {
        for (a[1] = 1; a[1] <= 5; a[1]++) {
            for (a[2] = 1; a[2] <= 5; a[2]++) {
                for (a[3] = 1; a[3] <= 5; a[3]++)
                    if (((a[0] + a[1]) == (a[2] + a[3])) + ((a[0] + a[3]) > (a[2] + a[1])) + ((a[0] + a[2]) < a[1]) + (a[0] != a[2]) + (a[0] != a[3]) + (a[1] != a[3]) + (a[2] != a[3]) == 7) {
                        for (i = 0; i < 5; i++) {
                            if (a[i] == 5) {
                                cout << A[i] << ' ' << "50" << endl;
                                break;
                            }
                        }
                        for (i = 0; i < 5; i++) {
                            if (a[i] == 4) {
                                cout << A[i] << ' ' << "40" << endl;
                                break;
                            }
                        }
                        for (i = 0; i < 5; i++) {
                            if (a[i] == 3) {
                                cout << A[i] << ' ' << "30" << endl;
                                break;
                            }
                        }
                        for (i = 0; i < 5; i++) {
                            if (a[i] == 2) {
                                cout << A[i] << ' ' << "20" << endl;
                                break;
                            }
                        }
                        for (i = 0; i < 5; i++) {
                            if (a[i] == 1) {
                                cout << A[i] << ' ' << "10" << endl;
                                break;
                            }
                        }
                    }
            }
        }
    }
    return 0;
}

