#include "caesar_code.h"

//--------------------------------------------------------------------------------------------------
Caesar::Caesar() : original_phrase(""), encrypted_phrase(""), key(0)
{
	//The empty body of the constructor
}
//--------------------------------------------------------------------------------------------------
Caesar::Caesar(std::string original, int k)
{
	original_phrase = original;
	key = k;
}
//--------------------------------------------------------------------------------------------------
Caesar::~Caesar()
{
	//The empty body of the destructor
}
//--------------------------------------------------------------------------------------------------
const std::string & Caesar::get_encrypted_string() const
{
	return encrypted_phrase;
}
//--------------------------------------------------------------------------------------------------
const std::string & Caesar::get_base_string() const
{
	return original_phrase;
}
//--------------------------------------------------------------------------------------------------
int Caesar::getKey() const
{
	return key;
}
//--------------------------------------------------------------------------------------------------
int Caesar::encryption()
{
	if (original_phrase.empty())
	{
		std::cerr << "Unable to encrypt an empty string!" << std::endl;
		return 1;
	}

	char ch = ' ';
	char temp = 0;
	char first_character = 65;
	char last_character = 90;
	this->clear_encrypted_string();

	for (size_t i = 0; i < original_phrase.size(); i++)
	{
		ch = original_phrase[i];

		if (isalpha(ch))
		{
			if (key > 0)
			{
				last_character = (islower(ch)) ? 122 : 90;

				if (ch + key > last_character)
				{
					temp = ch + key - 26;
				}
				else
				{
					temp = ch + key;
				}
			}
			else
			{
				first_character = (islower(ch)) ? 97 : 65;

				if (ch + key < first_character)
				{
					temp = ch + key + 26;
				}
				else
				{
					temp = ch + key;
				}
			}
			encrypted_phrase.push_back(temp);
		}
		else
		{
			encrypted_phrase.push_back(ch);
		}
	}
	return 0;
}
//--------------------------------------------------------------------------------------------------
int Caesar::decryption()
{
	if (original_phrase.empty())
	{
		std::cerr << "Unable to decrypt empty string!" << std::endl;
		return 1;
	}

	char ch = ' ';
	char temp = 0;
	char first_character = 65;
	char last_character = 90;
	this->clear_encrypted_string();

	for (size_t i = 0; i < encrypted_phrase.size(); i++)
	{
		ch = encrypted_phrase[i];

		if (isalpha(ch))
		{
			if (key > 0)
			{
				first_character = (islower(ch)) ? 97 : 65;

				if (ch + key > first_character)
				{
					temp = ch - key + 26;
				}
				else
				{
					temp = ch - key;
				}
			}
			else
			{
				last_character = (islower(ch)) ? 97 : 65;

				if (ch + key < last_character)
				{
					temp = ch - key - 26;
				}
				else
				{
					temp = ch - key;
				}
			}
			original_phrase.push_back(temp);
		}
		else
		{
			original_phrase.push_back(ch);
		}
	}
	return 0;
}
//--------------------------------------------------------------------------------------------------
void Caesar::clear_base_string()
{
	original_phrase.clear();
}
//--------------------------------------------------------------------------------------------------
void Caesar::clear_encrypted_string()
{
	encrypted_phrase.clear();
}
//--------------------------------------------------------------------------------------------------
void Caesar::delete_key()
{
	srand(time(0));
	key = rand() % 101;
}
//--------------------------------------------------------------------------------------------------