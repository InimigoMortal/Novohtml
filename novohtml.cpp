#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main(){
    FreeConsole();
    ofstream arquivo;
    arquivo.open("novo.html");
    if(arquivo.is_open()){
        const char *content="<!DOCTYPE html>\n"
        "<html>\n"
        "	<head>\n"
        "		<title>Título</title>\n"
        "	</head>\n"
        "\n"
        "	<body>\n"
        "		The content of the document......\n"
        "	</body>\n"
        "\n"
        "</html>";

        arquivo << content;
    }
    arquivo.close();

   return(0);
}

