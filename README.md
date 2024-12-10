# :desktop_computer: 42Heilbronn :de:

<p align="center">
  <img src="https://github.com/Tilek12/42-project-badges/blob/main/badges/cppe.png">
</p>

<h1 align="center">
 Project - CPP Module 01 :brain:
</h1>

<h2 align="center">
 :white_check_mark: 100/100
</h2>

## :clipboard: Project info: [subject](https://github.com/Tilek12/42HN-CPP_Module_01/blob/master/subject_cpp_01.pdf)

## :green_circle: **Exercise 00: BraiiiiiiinnnzzzZ**

**Turn-in directory :**   | ex00/
|:---|:---|
**Files to turn in :**    | Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp
**Forbidden functions :** | None

First, implement a **Zombie** class. It has a string private attribute **name**.
Add a member function void announce( void ); to the Zombie class. Zombies announce themselves as follows:

**`<name>: BraiiiiiiinnnzzzZ...`**

Don’t print the angle brackets (< and >). For a zombie named Foo, the message would be:

**`Foo: BraiiiiiiinnnzzzZ...`**

Then, implement the two following functions:
- **`Zombie* newZombie( std::string name );`**
It creates a zombie, name it, and return it so you can use it outside of the function scope.

- **`void randomChump( std::string name );`**
It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case 
it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must 
print a message with the name of the zombie for debugging purposes.

---------------------------------------------

## :green_circle: **Exercise 01: Moar brainz!**

**Turn-in directory :**   | ex01/
|:---|:---|
**Files to turn in :**    | Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp
**Forbidden functions :** | None

Time to create a **horde of Zombies!**

Implement the following function in the appropriate file:

    Zombie*    zombieHorde( int N, std::string name );
    
It must allocate N Zombie objects in a single allocation. Then, it has to initialize the zombies, 
giving each one of them the name passed as parameter. The function returns a pointer to the first zombie.

Implement your own tests to ensure your **zombieHorde()** function works as expected. 
Try to call **announce()** for each one of the zombies.

Don’t forget to delete all the zombies and check for **memory leaks**.

---------------------------------------------

## :green_circle: **Exercise 02: HI THIS IS BRAIN**

**Turn-in directory :**   | ex02/
|:---|:---|
**Files to turn in :**    | Makefile, main.cpp
**Forbidden functions :** | None

Write a program that contains:
- A string variable initialized to "HI THIS IS BRAIN".
- stringPTR: A pointer to the string.
- stringREF: A reference to the string.

Your program has to print:
- The memory address of the string variable.
- The memory address held by stringPTR.
- The memory address held by stringREF.

And then:
- The value of the string variable.
- The value pointed to by stringPTR.
- The value pointed to by stringREF.

That’s all, no tricks. The goal of this exercise is to demystify references which can seem completely new. 
Although there are some little differences, this is another syntax for something you already do: address manipulation.

---------------------------------------------

## :green_circle: **Exercise 03: Unnecessary violence**

**Turn-in directory :**   | ex03/
|:---|:---|
**Files to turn in :**    | Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, 
|                         | HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp |
**Forbidden functions :** | None

Implement a Weapon class that has:
- A private attribute **type**, which is a string.
- A getType() member function that returns a const reference to type.
- A setType() member function that sets type using the new one passed as parameter.

Now, create two classes: **HumanA** and **HumanB**. They both have a **Weapon** and a name. 
They also have a member function attack() that displays (of course, without the angle brackets):
    
    <name> attacks with their <weapon type>

HumanA and HumanB are almost the same except for these two tiny details: 
- While HumanA takes the Weapon in its constructor, HumanB doesn’t.
- HumanB may **not always** have a Weapon, whereas HumanA will **always** be armed.

If your implementation is correct, executing the following code will print an attack with "crude spiked club" then a second attack with "some other type of club" for both test cases:

```
int main()
{
  {
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club"); bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");

    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
  }

  return 0;
}

```
club.setType("some other type of club"); jim.attack();
Don’t forget to check for memory leaks.
