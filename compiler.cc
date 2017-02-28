#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Compiler {
  public: 
     void compile(string);
}
void Compiler::compile (string) {
  
  
}

int main() {
  
 std::ifstream file("compile.tls");
std::string str;
std::string file_contents;
while (std::getline(file, str))
{
  file_contents += str;
  file_contents.push_back('\n');
}  
  
  Compiler compiler
  compiler.compile(file_contents)
  
 return 0; 
}
