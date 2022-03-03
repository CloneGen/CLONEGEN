typedef struct  Stu {
    char stu_id [20];
    char name [20];
    char gender;
    int age;
    char score [20];
    char address [50];
    struct  Student *next;
    struct  Student *prev;
}
Student;

int main () {
    char start [50];
    Student *head = NULL;
    Student *tail = NULL;
    while (scanf ("%s", start)) {
        if (strcmp (start, "end") != 0) {
            Student *stu = (Student *) malloc (sizeof (Student));
            strcpy (stu->stu_id, start);
            if (scanf (" %s %c %d %s %s", stu->name, &stu->gender, &stu->age, stu->score, stu->address)) {
                stu->next = NULL;
                stu->prev = NULL;
                if (head == NULL) {
                    head = stu;
                    tail = stu;
                }
                else {
                    tail->next = stu;
                    stu->prev = tail;
                    tail = tail->next;
                }
            }
        }
        else
            break;
    }
    while (tail != NULL) {
        printf ("%s %s %c %d %s %s\n", tail->stu_id, tail->name, tail->gender, tail->age, tail->score, tail->address);
        head = tail;
        tail = tail->prev;
        free (head);
    }
    return 0;
}

