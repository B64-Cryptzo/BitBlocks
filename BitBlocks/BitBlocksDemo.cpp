#include "BitPacker.h"
#include <iostream>

int main()
{
	BitBlock DemoApi(likesBread | likesButter | likesHam | likesTomato | likesLettuce | likesOlives);

	DemoApi.toggleBit(likesOlives);

	std::cout << (DemoApi(likesOlives) ? "true" : "false") << "\n";
	
	DemoApi.toggleBit(likesOlives);

	std::cout << (DemoApi & likesOlives ? "true" : "false") << "\n";

	std::cout << "Size of BitBlock Object: " << sizeof(DemoApi) << std::endl;
	std::cout << "Size of Bool Equivalent: " << sizeof(bool) * 6 << std::endl;

	std::cin.get();
}