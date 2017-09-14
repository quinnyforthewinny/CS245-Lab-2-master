#include "stdafx.h"
#include "decrypt.h"
#include <string>

using namespace std;

/*
 * Function definition
 *
 * decrypt() - implements a Caesar cipher that takes each character
 * in @cipher_text and shifts it by the given @key.  Assumes that
 * alpha characters are CAPITALIZED, and ignores all other characters.
 */

string decrypt(const string &cipher_text, int key)
{
	// variable declaration: stores the decrypted, plain-text string
	string plain_text;

	// store the size of the @cipher_text string as a constant
	const int message_length = cipher_text.length();
	
	// decipher @cipher_text one character at a time
	for (int i = 0; i < message_length; i++)
	{
		// get the current character in the @cipher_text string
		char c = cipher_text.at(i);

		// if the character is an alpha character (A-Z), apply the key to it
		if (c >= 'A' && c <= 'Z')
		{
			c -= key;

			// adjust for (i.e., wrap) characters below 'A' and above 'Z'
			if (c > 'Z')
			{
				c -= 26;		// shift c down 26 ASCII codes
			}
			else if (c < 'A')
			{
				c += 26;		// shift c up 26 ASCII codes
			}
		}

		// append the deciphered character to the plain_text string
		plain_text += c;
	}

	return plain_text;
}

string decrypt(string &, unsigned)
{
	return string();
}
