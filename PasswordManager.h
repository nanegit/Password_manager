#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H
using namespace std;

#include <string>
#include <vector>

class PasswordManager {
public:
    void addPassword(const string& site, const string& password);
    std::string getPassword(const string& site);
    void removePassword(const string& site);
    void listPasswords();

private:
    struct PasswordEntry {
        string site;
        string encryptedPassword;
    };

    vector<PasswordEntry> passwordList;
};

#endif
