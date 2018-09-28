#include "caesar_code.h"

//--------------------------------------------------------------------------------------------------
int main()
{
	Caesar Phrase("Hello, world!", 25);

	Phrase.encryption();
	std::cout << Phrase.get_encrypted_string() << std::endl;
	
	Phrase.delete_key();
	
	Phrase.decryption();
	std::cout << Phrase.get_base_string() << std::endl;

    return 0;
}
//--------------------------------------------------------------------------------------------------