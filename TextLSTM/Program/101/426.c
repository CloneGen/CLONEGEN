int main () {
    int a, b, c, i;
    i = 0;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            if (b == a)
                continue;
            c = 6 - a - b;
            if ((((b < a) + (c == a)) == (a - 1)) && (((a < b) + (a < c)) == (b - 1)) && (((c < b) + (b < a)) == (c - 1))) {
                char order [4];
                order[a] = 'A';
                order[b] = 'B';
                order[c] = 'C';
                cout << order[3] << order[2] << order[1] << endl;
                i = 1;
                break;
            }
        }
        if (i == 1)
            break;
    }
    return 0;
}

