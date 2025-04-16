#ifndef STORE_H
#define STORE_H
using namespace std;
#include <string>

class Store {
public:
    Store(const string& dbName);
    ~Store();

    bool addPassword(const string& site, const string& encryptedPassword);
    string getPassword(const string& site);
    bool removePassword(const string& site);
    void initializeDatabase();  // միայն առաջին անգամ կանչելու համար
};

#endif
