#include <iostream>
#include <vector>
#include <string>

using namespace std;

class YunusCanCV {
public:
    // Kişisel Bilgiler 
    string name = "Yunus Can";
    string title = "Computer Engineering Student";
    string university = "Istanbul Arel University";

    // Hakkımda Bölümü 
    void aboutMe() {
        cout << "--- ABOUT ME ---" << endl;
        cout << "Motivated, eager-to-learn engineering student with strong basics." << endl;
        cout << "Focused on algorithm development using C++ and improving skills" << endl;
        cout << "through practical projects." << endl;
    }

    // Eğitim ve Yetkinlikler 
    void educationAndSkills() {
        cout << "\n--- EDUCATION ---" << endl;
        cout << university << " | 1st Year" << endl;

        cout << "\n--- TECHNICAL SKILLS ---" << endl;
        vector<string> skills = {
            "C++ Programming",
			"Pyhton Programming",
            "Algorithm Design",
            "Problem Solving",
            "Unity (Beginner Level)"
        };

        for (const string& skill : skills) {
            cout << "[+] " << skill << endl;
        }
    }

    // Kariyer Hedefleri 
    void goals() {
        cout << "\n--- GOALS ---" << endl;
        cout << ">> Take an active role in software development processes." << endl;
        cout << ">> Learn industry standards through real experience." << endl;
        cout << ">> Write clean, efficient, and maintainable code." << endl;
    }

    // CV Yazdırma Fonksiyonu 
    void printCV() {
        cout << "============================================" << endl;
        cout << "           " << name << " - CV" << endl;
        cout << "      " << title << endl;
        cout << "============================================" << endl;

        aboutMe();
        educationAndSkills();
        goals();

        cout << "============================================" << endl;
        cout << "Status: Ready for Internship Application!" << endl;
        cout << "============================================" << endl;
    }
};

int main() {
    YunusCanCV cv;
    cv.printCV();
    return 0;
}