int main () {
    int s, i, longs;
    char zfc [50];
    cin.getline (zfc, 50);
    longs = strlen (zfc);
    for (i = 0; i < longs; i++) {
        if (zfc[i] > 47 && zfc[i] < 58) {
            s = zfc[i] - 48;
            cout << s;
        }
        else
            cout << endl;
    }
}

