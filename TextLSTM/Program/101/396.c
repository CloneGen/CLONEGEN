int judge_problem (int a, int b, int c) {
    int food [4];
    food[a] = (b > a) + (c == a);
    food[b] = (a > b) + (a > c);
    food[c] = (c > b) + (b > a);
    if ((food[1] > food[2]) && (food[2] > food[3]))
        return 1;
    else
        return 0;
}

void print_abc (int a, int b, int c) {
    for (int i = 1;
    i <= 3; i++) {
        if (a == i)
            cout << 'A';
        if (b == i)
            cout << 'B';
        if (c == i)
            cout << 'C';
    }
    cout << endl;
}

int main () {
    for (int a = 1;
    a <= 3; a++) {
        for (int b = 1;
        b <= 3; b++) {
            for (int c = 1;
            c <= 3; c++) {
                if ((a != b) && (b != c) && (a != c))
                    if (judge_problem (a, b, c) == 1)
                        print_abc (a, b, c);
            }
        }
    }
}

