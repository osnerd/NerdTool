#include <iostream>
#include <thread>
#include <vector>
#include <string>

void setColor(int r, int g, int b) {
    std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
}

void fadeBlue() {
    for (int i = 0; i <= 320; i++) {
        std::cout << "\033[38;2;0;0;" << i << "m";
        std::cout << "Loading " << i << "\r";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(15));
    }
    std::cout << "\033[0m" << std::endl;
}

int main() {
    int choice;
    system("chcp 65001");
    fadeBlue();
    system("cls");
    setColor(0, 255, 255);
    std::cout << " ▐ ▄ ▄▄▄ .▄▄▄  ·▄▄▄▄  " << std::endl;
    std::cout << " •█▌▐█▀▄.▀·▀▄ █·██▪ ██ " << std::endl;
    std::cout << " ▐█▐▐▌▐▀▀▪▄▐▀▀▄ ▐█· ▐█▌" << std::endl;
    std::cout << " ██▐█▌▐█▄▄▌▐█•█▌██. ██ " << std::endl;
    std::cout << " ▀▀ █▪ ▀▀▀ .▀  ▀▀▀▀▀▀• " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "\033[0m";
    std::cout << "\033[90m[\033[36m1\033[90m]\033[0m PyInstaller Decompiler   \033[90m[\033[36m2\033[90m]\033[0m NetWork Check" << std::endl;
    std::cout << "\033[90m[\033[36m3\033[90m]\033[0m Connect To FTP Server    \033[90m[\033[36m4\033[90m]\033[0m IP Dos" << std::endl;
    std::cout << "\033[90m[\033[36m3\033[90m]\033[0m Check Active Connections \033[90m[\033[36m4\033[90m]\033[0m Exit" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "\033[90m[\033[36m>\033[90m]\033[0m ";
    std::cin >> choice;
    if(choice==1) {
        std::string path;
        std::cout << "Path To File \033[90m[\033[36m>\033[90m]\033[0m ";
        std::cin >> path;
        std::string command = "python files\\reverse.py " + path;
        system(command.c_str());
    }
    else if(choice==2) {
        std::string open = "cmd /c files\\network.cmd";
        system(open.c_str());
    }
    if(choice==3) {
        std::string ftpserver;
        std::cout << "Enter FTP Server (IP ADDRESS) \033[90m[\033[36m>\033[90m]\033[0m ";
        std::cin >> ftpserver;
        std::string connect = "ftp " + ftpserver;
        system(connect.c_str());
    }
    if(choice==4) {
        std::string ip;
        std::cout << "Enter IP Address To Ping \033[90m[\033[36m>\033[90m]\033[0m ";
        std::cin >> ip;
        std::string ping = "ping " + ip;
        system(ping.c_str());
    }
    if(choice==5) {
        system("netstat -ano");
        system("net session");
        system("PAUSE");
    }
    return 0;
}
