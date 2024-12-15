#include <openssl/sha.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

std::string sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);

    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main() {
    std::string respuesta1 = "ETT";
    std::string respuesta2 = "curriculum";
    std::string clave = "empleo";

    std::cout << "Hash de 'ETT': " << sha256(respuesta1) << std::endl;
    std::cout << "Hash de 'curriculum': " << sha256(respuesta2) << std::endl;
    std::cout << "Hash de 'empleo': " << sha256(clave) << std::endl;

    return 0;
}

