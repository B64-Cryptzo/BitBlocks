#pragma once

class BitBlock
{
public:
	BitBlock(unsigned char Bits) : Bits(Bits) {};
	
	void toggleBit(unsigned char value)
	{
		if (this->Bits & value)
			this->Bits &= ~value;
		else
			this->Bits |= value;
	}
	unsigned char returnBits()
	{
		return this->Bits;
	}

	bool operator &(const unsigned char& bit) const { return this->Bits & bit; }
	bool operator ()(const unsigned char& bit) const { return this->Bits & bit; }

private:
	unsigned char Bits;
};

enum DemoBoolean : unsigned char
{
	likesChicken = 0x1,
	likesHam = 0x2,
	likesLettuce = 0x4,
	likesTomato = 0x8,
	likesPickles = 0x10,
	likesOlives = 0x20,
	likesBread = 0x40,
	likesButter = 0x80

};