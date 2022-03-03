int main () {
    int i, n, age_1_18 = 0, age_19_35 = 0, age_36_60 = 0, age_60 = 0;
    cin >> n;
    int age [100];
    double age_1_18_percent, age_19_35_percent, age_36_60_percent, age_60_percent;
    for (i = 1; i <= n; i++) {
        cin >> age[i];
        if (age[i] >= 1 && age[i] <= 18) {
            age_1_18 = age_1_18 + 1;
        }
        if (age[i] >= 19 && age[i] <= 35) {
            age_19_35 = age_19_35 + 1;
        }
        if (age[i] >= 36 && age[i] <= 60) {
            age_36_60 = age_36_60 + 1;
        }
        if (age[i] > 60) {
            age_60 = age_60 + 1;
        }
    };
    age_1_18_percent = age_1_18 * 1.0 / n;
    age_19_35_percent = age_19_35 * 1.0 / n;
    age_36_60_percent = age_36_60 * 1.0 / n;
    age_60_percent = age_60 * 1.0 / n;
    cout << fixed << setprecision (2) << "1-18: " << age_1_18_percent * 100 << "%" << endl;
    cout << "19-35: " << age_19_35_percent * 100 << "%" << endl;
    cout << "36-60: " << age_36_60_percent * 100 << "%" << endl;
    cout << "60??: " << age_60_percent * 100 << "%" << endl;
    return 0;
}

