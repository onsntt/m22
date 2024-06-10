#include<iostream>
#include<map>
#include<string>

int main(){

std::map<int, std::string> ourMap;

ourMap.insert(std::make_pair<int, std::string>(10, "ten"));
ourMap.insert(std::make_pair<int, std::string>(12, "twelve"));
ourMap.insert(std::make_pair<int, std::string>(1, "one"));
ourMap.insert(std::make_pair<int, std::string>(9, "nine"));
ourMap.insert(std::make_pair<int, std::string>(6, "six"));
ourMap.insert(std::make_pair<int, std::string>(11, "eleven"));
ourMap.insert(std::make_pair<int, std::string>(7, "seven"));  

// пары введены не по порядку, но мапа так построена, что сама упорядочит
// есть два полезных оператора - begin  и end
// begin указывает на самый первый элемент мапы, а end - на элемент, следующий после последнего
// это помогает удобно бегать циклами по мапам
// выведем всю мапу:
// цикл строим по итератору

for(std::map<int, std::string>::iterator it = ourMap.begin(); it != ourMap.end(); it++)
  {
    std::cout << it ->first << " " << it -> second << "\n";
  }

 // очень легко найти наименьший ключ
  std::cout << ourMap.begin()->first << "\n";
   // ourMap.begin() - указатель на элемент мапы с наименьшим ключом. Стрелкой мы через разыменование получаем значение элемента first
   // а можем и second

  std::cout << ourMap.begin()->first << " " << ourMap.begin()->second << "\n";
  std::cout << ourMap.end()->first  << "\n"; // непонятно, почему он выводит 7, при попытке вывести second - ошибка. Похоже, end - количество пар

  // итераторы нужны и для удаления элементов
  // удаления в мапе совершается через оператор erase, принимающий итератор на элемент, который нужно удалить
  // 

std::map<int, std::string>::iterator it1 = ourMap.find(10); // создаем итератор it1, который укажет на элемент (пару) с ключом 10
ourMap.erase(it1); // передаем в метод erase итератор с найденным ключом 10

/// снова выведем мапу:
for (std::map<int, std::string>::iterator it = ourMap.begin(); it != ourMap.end(); it++)
{
  std::cout << it->first << " " << it->second << "\n";
}
// пара 10 - "ten" удалена

// erase можно вызвать и без итератора, а просто по ключу пары, которую хотим удалить:

ourMap.erase(11);
/// снова выведем мапу:
for (std::map<int, std::string>::iterator it = ourMap.begin(); it != ourMap.end(); it++)
{
  std::cout << it->first << " " << it->second << "\n";
}
// пара 11 - "eleven" удалена

// кстати, удалять пары удобно при циклическом обходе всех элементов и проверке их на какой-то критерий
}