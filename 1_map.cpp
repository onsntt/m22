#include<iostream>
#include<string>
#include<map>

int main() {

std::map<int, std::string> flatPerson;

flatPerson[2] = "Ivanov";  
flatPerson[5] = "Petrov";

std::cout << flatPerson[5] << "\n";

flatPerson[5] = "Sidorov";
std::cout << flatPerson[5] << "\n"; // сменили ЗНАЧЕНИЕ, соответствующее ключу 5
std::cout << flatPerson[4] << "\n"; // Внимание! При обращении к элементу мапы через квадратные скобки элемент с указанным в скобках ключом создается автоматически
                                    //а значения у него может и не оказаться!!!  

// в std::map ключи являются уникальными и по любому из них может храниться только одно значение

}