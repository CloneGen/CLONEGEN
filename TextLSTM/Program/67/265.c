int main () {
    int i, num;
    double origin, better, origin_temp, better_temp;
    cin >> num;
    cin >> origin >> better;
    for (i = 1; i < num; i++) {
        cin >> origin_temp >> better_temp;
        if (better / origin - better_temp / origin_temp > 0.05)
            cout << "worse" << endl;
        else if (better_temp / origin_temp - better / origin > 0.05)
            cout << "better" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

