#ifndef CAESAR_CODE_H_
#define CAESAR_CODE_H_
#include <iostream>
#include <string>
#include <ctime>

//--------------------------------------------------------------------------------------------------
class Caesar
{
private:
	std::string original_phrase;
	std::string encrypted_phrase;
	short key;
public:
	Caesar();
	Caesar(std::string original, int key);
	~Caesar();

	const std::string & get_encrypted_string() const;
	const std::string & get_base_string() const;
	int getKey() const;

	int encryption();
	int decryption();

	void clear_base_string();
	void clear_encrypted_string();
	void delete_key();
};
//--------------------------------------------------------------------------------------------------
#endif // CAESAR_CODE_H_