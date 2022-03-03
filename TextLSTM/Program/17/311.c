int pairs (int, int, char text [], char match []);

int main () {
    for (;;) {
        char text [101] = {0}, match [101] = {0};
        int lgth = 0;
        gets (text);
        if (text[0] == 0)
            break;
        for (int i = 0;
        i < 101; i++) {
            if (text[i] != 0) {
                if (text[i] == '(')
                    match[i] = '$';
                else if (text[i] == ')')
                    match[i] = '?';
                else
                    match[i] = ' ';
            }
            else {
                lgth = i;
                break;
            }
        }
        pairs (0, 0, text, match);
        cout << text << endl << match << endl;
    }
    return 0;
}

int pairs (int n, int hemi, char text [], char match []) {
    for (;;) {
        char c = text[n];
        if (c == 0)
            return -1;
        if (c == '(') {
            int l = n;
            int r = pairs (n + 1, 1, text, match);
            if (r != -1) {
                match[l] = match[r] = ' ';
                n = r + 1;
            }
            else
                return -1;
        }
        else if (c == ')' && hemi == 1)
            return n;
        else
            n++;
    }
}

