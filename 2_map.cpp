#include<iostream>
#include<string>
#include<map>

int main() {

std::pair<std::string, int> ourPair ("Hello", 5); // создали т.н. пару, которую обозвали ourPair. В ней ключ - строка, а значение - int

std::map<std::string, int> ourMap; // создали мапу, в которой ключи - строки, а значения - целые числа

ourMap.insert(ourPair); // через метод insert засунули в мапу нашу пару

std::pair<std::string, int> ourPair2("Wata", 6); // создали т.н. пару, которую обозвали ourPair2. В ней ключ - строка, а значение - int

ourMap.insert(ourPair2);  // через метод insert засунули в мапу нашу пару2. Если не выполнить insert - std::cout << ourMap["Wata"] << "\n"; выведет 0!!!!

std::cout << ourMap["Hello"] << "\n";
std::cout << ourMap["Wata"] << "\n";

std::cout << ourPair.first << " " << ourPair.second << "\n"; //first and second позволяют выводить ключ и значение пары
std::cout << ourPair2.first << " " << ourPair2.second << "\n";

//можно вставлять в мапу пары без отдельного создания пары. Она может быть объявлена прямо внутри инсерта:
ourMap.insert(std::pair<std::string, int>("world", 8));

// ещё можно использовать std::make_pair
ourMap.insert(std::make_pair<std::string, int>("banana", 9));

std::cout << ourMap["world"] << "\n";
ourMap.insert(std::pair<std::string, int>("world", 2)); // попробуем изменить значение по ключу world
std::cout << ourMap["world"] << "\n"; //ничё не получится, т.к. метод insert не позволяет менять уже имеющееся значение
}