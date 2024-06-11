#include<iostream>
#include<string>
#include<map>

int main() {


std::map<int, std::string> myMap;

std::pair<int, std::string> pair1 (1, "one");

myMap.insert(pair1);

myMap[2] = "two";

myMap.insert(std::pair<int, std::string>(3, "three") );

myMap.insert(std::make_pair<int, std::string>(4, "four"));

for(std::map<int, std::string>::iterator it1 = myMap.begin(); it1 != myMap.end(); it1++)
  {
    std::cout << it1 -> first << " => " << it1 -> second << "\n";
  }

std::map<int, std::string>::iterator it2 = myMap.find(4);
std::cout << it2 -> first << " " << it2 -> second << "\n";
myMap.erase(it2);

for (std::map<int, std::string>::iterator it1 = myMap.begin(); it1 != myMap.end(); it1++)
{
    std::cout << it1->first << " => " << it1->second << "\n";
}

myMap.erase(3);
for (std::map<int, std::string>::iterator it1 = myMap.begin(); it1 != myMap.end(); it1++)
{
  std::cout << it1->first << " => " << it1->second << "\n";
}
}