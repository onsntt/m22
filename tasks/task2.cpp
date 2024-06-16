#include<iostream>
#include<string>
#include<map>

int main(){
std::map<std::string, std::string> registry;    
int count = 0;    
bool more = true;
while(more)
  {
    std::string surname = "";
    std::string input = "";
    std::cin >> input;
    if (input != "next" && input != "exit")
      {
        count++;
        std::string key = "";
        key = input + std::to_string(count);
        surname = input;
        registry.insert(std::pair<std::string, std::string>(key, surname));
        for (std::map<std::string, std::string>::iterator itShow = registry.begin(); itShow != registry.end(); itShow++)
          {
            std::cout << itShow -> first << " " << itShow -> second << "\n";
          }
      }
      else if (input == "next")
      {
        if (registry.begin() ->first == "")
          {
            std::cout << "That's enouth!\n";
            more = false;
            return 0;
          }
          else
          {
              std::cout << registry.begin()->second << ", welcome to proctolog!\n";
              registry.erase(registry.begin()->first);
          }

        
      }
      else if (input == "exit")
      {
        more = false;
        return 0;
      }
        
  }




}