#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string name;
    std::string description;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter a sentence that describes you: ";
    std::getline(std::cin, description);

    std::ofstream file("personal_web_page.html");
    if (!file) {
        std::cerr << "Unable to create file";
        return 1;
    }

    file << "<!DOCTYPE html>\n"
         << "<html>\n"
         << "<head>\n"
         << "    <title>" << name << "'s Personal Web Page</title>\n"
         << "</head>\n"
         << "<body>\n"
         << "    <h1>Welcome to " << name << "'s personal web page!</h1>\n"
         << "    <p>" << description << "</p>\n"
         << "</body>\n"
         << "</html>\n";

    file.close();

    std::cout << "HTML file has been created named 'personal_web_page.html'";

    return 0;
}