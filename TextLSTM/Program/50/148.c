int main () {
    int a, month [13] = {0, 13, 44, 72, 103, 133, 164, 194, 225, 256, 286, 317, 347}, w, i;
    cin >> w;
    for (i = 1; i <= 12; i++)
        if ((month[i] + w - 1) % 7 == 5)
            cout << i << endl;
    return 0;
}

