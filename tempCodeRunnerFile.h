#ifndef ENCRYPTION_H
#define ENCRYPTION_H
using namespace std;
#include <string>

class Encryption {
public:
    static std::string encrypt(const string& plaintext, const string& key);
    static std::string decrypt(const string& ciphertext, const string& key);
};
#endif
