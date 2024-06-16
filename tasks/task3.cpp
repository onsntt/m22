#include<iostream>
#include<string>
#include<map>

bool ok (std::string s1, std::string s2)
{  if (s1.length() != s2.length())
return false;
else
    {
      std::map<std::string, char> map1;
      int count = 0;
      for (int i = 0; i < s1.length(); i++)
      {
        std::string key = "";
        key = s1[i] + std::to_string(count);
        map1.insert(std::pair<std::string, char>(key, s1[i]));
        count++;
      }
      std::string sorted1 = "";
      sorted1.resize(count);

      int i = 0;
      for (std::map<std::string, char>::iterator it1 = map1.begin(); it1 != map1.end(); it1++)
      {
        sorted1[i] = it1->second;
        i++;
      }
      std::cout << sorted1 << "\n";

      std::map<std::string, char> map2;
      count = 0;
      for (int i = 0; i < s2.length(); i++)
      {
        std::string key = "";
        key = s2[i] + std::to_string(count);
        map2.insert(std::pair<std::string, char>(key, s2[i]));
        count++;
      }
      std::string sorted2 = "";
      sorted2.resize(count);

      i = 0;
      for (std::map<std::string, char>::iterator it2 = map2.begin(); it2 != map2.end(); it2++)
      {
        sorted2[i] = it2->second;
        i++;
      }
      std::cout << sorted2 << "\n";

      if (sorted1 == sorted2)
        return true;
      else
        return false;
    }

    
}

int main(){

std::string str1, str2 = "";
std::cin >> str1;
std::cin >> str2;
if (ok (str1, str2)) std::cout << "Anagram!\n";
else std::cout << "Not anagram\n";

}