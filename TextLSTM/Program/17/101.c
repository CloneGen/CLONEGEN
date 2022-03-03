int main () {
    char sen [201], done [201];
    int pos [200];
    int left, right;
    int i, count, len;
    while (cin.getline (sen, 200)) {
        count = 0;
        left = 0;
        right = 0;
        for (i = 0; i < 200; i++) {
            done[i] = ' ';
        }
        len = strlen (sen);
        for (i = 0; i < len; i++) {
            if (sen[i] == '(') {
                pos[count] = i;
                done[pos[count]] = '$';
                left++;
                count++;
            }
            if (sen[i] == ')') {
                if (left <= right) {
                    done[i] = '?';
                }
                else {
                    right++;
                    done[pos[count - 1]] = ' ';
                    count--;
                }
            }
        }
        cout << sen << endl;
        for (i = 0; i < len; i++) {
            cout << done[i];
        }
        cout << endl;
    }
    return 0;
}

