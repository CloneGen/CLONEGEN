void print (int x, int y);
char s [502];

int main () {
    int i, j, k = 1, length;
    cin >> s;
    length = strlen (s);
    while (k < length) {
        for (i = 0, j = k; j < length; i++, j++) {
            int begin = i;
            int end = j;
            while (begin < end) {
                if (*(s + begin) != *(s + end)) {
                    break;
                }
                else {
                    begin++;
                    end--;
                }
            }
            if (begin >= end) {
                print (i, j);
            }
        }
        k++;
    }
    return 0;
}

void print (int x, int y) {
    for (int t = x;
    t <= y; t++) {
        cout << *(s + t);
    }
    cout << endl << endl;
}

