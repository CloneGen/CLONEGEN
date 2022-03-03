int main () {
    int w;
    cin >> w;
    int day = 12;
    for (int i = 1;
    i <= 12; i++) {
        if ((w + day) % 7 == 5)
            cout << i << endl;
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
            day += 31;
        else if (i == 2)
            day += 28;
        else
            day += 30;
    }
    return 0;
}

