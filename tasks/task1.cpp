#include <iostream>
#include <string>
#include <map>

int main()
{
    
    bool more = true;
    std::map<std::string, std::string> telNumbers;
 
while(more)
{
    std::string action = " ";

      while (action != "add" && action != "number" && action != "surname" && action != "exit")
        {
          std::cout << "Enter add to add record, number to find its owner or surname to find its number. Type exit for exit))\n";
 
          std::cin >> action;
        }

          if (action == "add")
           {
             std::cout << "Enter surname\n";
             std::string surname;
             std::cin >> surname;
             std::cout <<"Enter number (XX-XX-XX only)\n";
             std::string number;
             std::cin >>number;
             std::map<std::string, std::string>::iterator itF = telNumbers.find(number);
               if (itF -> first == number)
                 {
                  std::cout << "Wrong number\n";
                    exit;

                 }
                  else
                   {
                      telNumbers.insert(std::pair<std::string, std::string>(number, surname));
                      std::cout << "New record added\n";
                      for (std::map<std::string, std::string>::iterator it = telNumbers.begin(); it != telNumbers.end(); it++)
                      {
                          std::cout << it->first << " " << it->second << "\n";
                      }
                   }

                     
           } 
           else if (action == "number")
           {
               std::cout << "Enter number (XX-XX-XX only)\n";
               std::string number;
               std::cin >> number;
               std::map<std::string, std::string>::iterator itN = telNumbers.find(number);
               if (itN->first == number)
                 {
                    std::cout << "The owner of " << number << " is " << itN->second << "\n";
                 }
                 else
                 {
                    std::cout << "Unknown number\n";
                 }
           }
           else if (action == "exit")
           {
               more = false;
               return 0;
           }
           else if (action == "surname")
           {
               std::cout << "Enter surname\n";
               std::string surname;
               std::cin >> surname;
               
               int i = 0;
               for (std::map<std::string, std::string>::iterator itS = telNumbers.begin(); itS != telNumbers.end(); itS++)
                 {
                    if (itS -> second == surname)
                      {
                          std::cout << itS -> second << " has number " << itS -> first << "\n";
                          i++;
                      }
                      
                 }
                 std::cout << "This surname has " << i << " numbers\n";
           }  
}          
}   