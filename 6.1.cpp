#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    int course;
    char gender;
    double gpa;
};

void print_students(const Student students[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "ФИО: " << students[i].name << ", Возраст: " << students[i].age
            << ", Курс: " << students[i].course << ", Пол: " << students[i].gender
            << ", Успеваемость: " << students[i].gpa << "\n";
    }
}

std::string find_oldest_student(const Student students[], int size, int course) {
    int maxAge = -1;
    std::string oldestStudent;
    for (int i = 0; i < size; ++i) {
        if (students[i].course == course && students[i].age > maxAge) {
            maxAge = students[i].age;
            oldestStudent = students[i].name;
        }
    }
    return oldestStudent;
}

int count_male_students(const Student students[], int size, int course) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (students[i].course == course && students[i].gender == 'M') {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "rus");

    int student_count;
    std::cout << "Введите количество студентов: ";
    std::cin >> student_count;
    std::cin.ignore();

    Student* students = new Student[student_count];

    for (int i = 0; i < student_count; ++i) {
        std::cout << "Введите данные для студента " << i + 1 << ":\n";
        std::cout << "ФИО: ";
        std::getline(std::cin, students[i].name);
        std::cout << "Возраст: ";
        std::cin >> students[i].age;
        std::cout << "Курс: ";
        std::cin >> students[i].course;
        std::cout << "Пол (M/F): ";
        std::cin >> students[i].gender;
        std::cout << "Успеваемость: ";
        std::cin >> students[i].gpa;
        std::cin.ignore();
    }

    std::cout << "\nСписок студентов: \n";
    print_students(students, student_count);

    int course;
    std::cout << "Введите курс для поиска самого старшего студента: ";
    std::cin >> course;
    std::cout << "Самый старший студент на курсе " << course << ": "
        << find_oldest_student(students, student_count, course) << "\n";

    std::cout << "Введите курс для подсчета студентов мужского пола: ";
    std::cin >> course;
    std::cout << "Количество студентов мужского пола на курсе " << course << ": "
        << count_male_students(students, student_count, course) << "\n";

    delete[] students;

}
