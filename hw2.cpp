#include<iostream>
#include<unordered_map>
#include<string>

bool func(std::string ransomLetter, std::string paper)
{
	std::unordered_map<char, int>letterFreqs;

	for (char i:paper)
	{
		++letterFreqs[i];
	}

	for (char i : ransomLetter)
	{
		if (letterFreqs.find(i) == letterFreqs.end() || letterFreqs[i] <= 0)
		{
			return false;
		}
		else
		--letterFreqs[i];
		
		
	}
	return true;
}


int main()
{
	bool result1 = func("aa", "aab");
	bool result2 = func("aab", "bb");
	bool result3 = func("a", "ba");
	bool result4 = func("aa", "ab");
	std::cout << "result1: " << std::boolalpha << result1 << std::endl;
	std::cout << "result2: " << std::boolalpha << result2 << std::endl;
	std::cout << "result3: " << std::boolalpha << result3 << std::endl;
	std::cout << "result4: " << std::boolalpha << result4 << std::endl;
	return 0;
}

