int main () {
    int t = 0, i = 0, j = 0, k = 0, time [26] [2], min = 0;
    char x = ' ', str [100000];
    cin >> t;
    cin.get ();
    for (i = 0; i < 26; i++) {
        time[i][0] = -1;
        time[i][1] = 0;
    }
    for (i = 0; i < t; i++) {
        for (j = 0;; j++) {
            x = getchar ();
            if (x == '\n') {
                min = 999999;
                for (k = 0; k < 26; k++) {
                    if (time[k][1] == 1 && time[k][0] < min)
                        min = time[k][0];
                }
                if (min == 999999)
                    cout << "no" << endl;
                else {
                    cout << str[min] << endl;
                }
                break;
            }
            else {
                str[j] = x;
                if (time[x - 97][1] == 0) {
                    time[x - 97][0] = j;
                    time[x - 97][1]++;
                }
                else
                    time[x - 97][1]++;
            }
        }
        for (k = 0; k < 26; k++) {
            time[k][0] = -1;
            time[k][1] = 0;
        }
    }
    return 0;
}

