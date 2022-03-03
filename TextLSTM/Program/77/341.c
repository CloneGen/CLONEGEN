char queue [100], boy, girl;
int length = 0;

void process () {
    int i, j;
    for (i = 0; i <= length - 2; i++) {
        if (queue[i] == boy) {
            j = i;
            do {
                j++;
            }
            while (queue[j] == ' ');
            if (queue[j] == girl) {
                queue[i] = ' ';
                queue[j] = ' ';
                cout << i << " " << j << endl;
                if (j < length - 1)
                    process ();
            }
        }
    }
}

int main () {
    int i;
    cin >> queue;
    do {
        length++;
    }
    while (queue[length] != '\0');
    boy = queue[0];
    i = 0;
    do {
        i++;
    }
    while (queue[i] == boy);
    girl = queue[i];
    process ();
    return 0;
}

