#include <iostream>
#include <string>

// ---------------- Base class ----------------
// Pet has 3 private variables and 2 public functions.
class Pet {
private:
    std::string name;
    std::string species;
    int age;

public:
    Pet(const std::string& petName, const std::string& petSpecies, int petAge)
        : name(petName), species(petSpecies), age(petAge) {}

    // Public function 1: prints the pet's information.
    void introduce() const {
        std::cout << "Hi! I'm " << name << ", a " << age
                  << "-year-old " << species << ".\n";
    }

    // Public function 2: adds one year to the pet's age.
    void haveBirthday() {
        age++;
        std::cout << "Happy birthday, " << name << "! Now " << age
                  << " years old.\n";
    }
};

// ---------------- Derived (child) class ----------------
// Dog inherits from Pet and adds 1 private variable and 1 public function.
class Dog : public Pet {
private:
    int tricksKnown;

public:
    Dog(const std::string& dogName, int dogAge, int tricks)
        : Pet(dogName, "dog", dogAge), tricksKnown(tricks) {}

    // Public function: a birthday show. Dog cannot touch Pet's private
    // variables directly, so it uses Pet's public functions instead.
    void birthdayShow() {
        introduce();      // Base class function
        haveBirthday();   // Base class function
        tricksKnown++;    // Dog learns a new trick each birthday
        std::cout << "For my birthday I learned a new trick. I now know "
                  << tricksKnown << " tricks!\n";
    }
};

int main() {
    Dog buddy("Buddy", 3, 4);
    buddy.birthdayShow();

    std::cout << "\nAfter the show:\n";
    buddy.introduce();   // A Dog is a Pet, so it can call Pet's functions

    return 0;
}
