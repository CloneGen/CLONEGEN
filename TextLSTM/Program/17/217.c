char in [110], work [110], out [110];
int len;

void pick (int L) {
    for (int i = L -1;
    i >= 0; i--) {
        if (work[i] == '(') {
            for (int j = 0;
            j < L -i; j++) {
                if (work[i + j] == ')') {
                    work[i] = ' ';
                    work[i + j] = ' ';
                    pick (len);
                    break;
                }
            }
        }
    }
}

void mark (int L) {
    for (int i = 0;
    i < L; i++) {
        if (work[i] == '(')
            out[i] = '$';
        if (work[i] == ')')
            out[i] = '?';
    }
}

int main () {
    while (cin) {
        cin.getline (in, 110);
        len = strlen (in);
        for (int i = 0;
        i < len; i++) {
            out[i] = ' ';
            work[i] = in[i];
        }
        pick (len);
        mark (len);
        for (int i = 0;
        i < len; i++) {
            cout << in[i];
        }
        cout << endl;
        for (int i = 0;
        i < len; i++) {
            cout << out[i];
        }
        cout << endl;
    }
    return 0;
}

