#include <string>

/*  This class uses the ed25519 encryption algorithm
    to provide message encryption/decryption using the private and public keys
    provided by the user
*/
class ED25519
{
public:
    // TODO
    ED25519();
    // TODO
    ~ED25519();

    // TODO
    /* Encrypts a message using the Public key
    */
    std::string encryptPublic();
    // TODO
    /* Encrypts a message using the Private key
    */
    std::string encryptPrivate();
private:
};