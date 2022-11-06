#include <iostream>

using namespace std;

// ===========================================
// class: User
// fields: username, password

// class: Database
// field: User* users(array)
// field: int size;

// method: bool SignIn(User)
// method: bool SignUp(User)
// method: User GetUserByUsername(username)
// ===========================================

class User {
    string username;
    string password;

public:
    User(const string& username, const string& password) : username(username), password(password) {}

    string GetUsername() {
        return username;
    }

    string GetPassword() {
        return password;
    }
};

class Database {
public:
    User* users;
    int size = 0;

    bool SignIn(string username, string password) {
        for (int i = 0; i < size; i++) {
            return username == this->users[i].GetUsername() && password == this->users[i].GetPassword() ? true : false;
        }
    }

    bool SignUp(string username, string password) {
        User* newUser = new User(username, password);
        return true;
    }

    void GetUserByUsername(string username) {
        for (int i = 0; i < size; i++) {
            if (username == this->users[i].GetUsername()) {
                cout << "Username: " << this->users[i].GetUsername() << "\nPassword: " << this->users[i].GetPassword() << endl;
            }

            else {
                cout << "No such user was found." << endl;
            }
        }
    }
};

void main() {
    Database data;
    cout << data.SignUp("ferid", "ferid123") << endl;
    cout << data.SignIn("ferid", "ferid123") << endl;
    data.GetUserByUsername("ferid");
}