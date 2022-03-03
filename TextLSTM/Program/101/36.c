int main () {
    int a, b, c;
    int words [4];
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++) {
            if (b != a) {
                c = 6 - a - b;
                words[a] = (b > a) + (c == a);
                words[b] = (a > b) + (a > c);
                words[c] = (c > b) + (b > a);
                if (words[1] > words[2] && words[2] > words[3]) {
                    char person [4];
                    person[0] = 0;
                    person[a] = 'A';
                    person[b] = 'B';
                    person[c] = 'C';
                    cout << person[1] << person[2] << person[3];
                    break;
                }
            }
        }
    return 0;
}

