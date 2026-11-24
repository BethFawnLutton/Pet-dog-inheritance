# Pet and Dog: Base and Derived Classes

- **Base class `Pet`**: 3 private variables (`name`, `species`, `age`) and 2 public functions (`introduce()`, `haveBirthday()`).
- **Derived class `Dog`**: 1 private variable (`tricksKnown`) and 1 public function (`birthdayShow()`).

`Dog` cannot reach Pet's private variables directly, so `birthdayShow()` uses Pet's public functions `introduce()` and `haveBirthday()` to do its job.

## Build and run

```bash
g++ -std=c++17 -Wall -o pets main.cpp
./pets
```

Expected output:

```
Hi! I'm Buddy, a 3-year-old dog.
Happy birthday, Buddy! Now 4 years old.
For my birthday I learned a new trick. I now know 5 tricks!

After the show:
Hi! I'm Buddy, a 4-year-old dog.
```
