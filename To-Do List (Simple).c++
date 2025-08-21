#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    do {
        cout << "\n1. Add task\n2. Show tasks\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        } else if (choice == 2) {
            cout << "Your tasks:\n";
            for (int i = 0; i < tasks.size(); i++)
                cout << i+1 << ". " << tasks[i] << endl;
        }
    } while (choice != 3);

    return 0;
}
