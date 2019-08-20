#include <sstream>
#include "Block.h"
#include "sha256.h"

using namespace std;

Block::Block(uint32_t indexIn, const string &dataIn) {
	index = indexIn;
	data = dataIn;
	nonce = -1;
	timestamp = time(nullptr);
}

string Block::getHash() {
	return hash;
}

void Block::mineBlock(uint32_t difficulty) {
	char charArray[difficulty + 1];

	for(uint32_t i = 0; i < difficulty; i++) {
		charArray[i] = '0';
	}

	charArray[difficulty] = '\0';

	string str = charArray;

	do {
		nonce++;
		hash = calculateHash();
	} while (hash.substr(0, difficulty) != str);
}

string Block::calculateHash() const {
	stringstream ss;
    ss << index << timestamp << data << nonce << prevHash;
 
    return sha256(ss.str());
}