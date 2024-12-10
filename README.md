# :desktop_computer: 42Heilbronn :de:

<p align="center">
  <img src="https://github.com/Tilek12/42-project-badges/blob/main/badges/cppe.png">
</p>

<h1 align="center">
 Project - CPP Module 01 :loudspeaker:
</h1>

<h2 align="center">
 :white_check_mark: 100/100
</h2>

## :clipboard: Project info: [subject](https://github.com/Tilek12/42HN-CPP_Module_01/blob/master/subject_cpp_01.pdf)

## :green_circle: **Exercise 00: BraiiiiiiinnnzzzZ**

**Title** | BraiiiiiiinnnzzzZ
|:---|:---|
**Turn-in directory :**   | ex00/
**Files to turn in :**    | Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp
**Forbidden functions :** | None

First, implement a **Zombie** class. It has a string private attribute **name**.
Add a member function void announce( void ); to the Zombie class. Zombies announce themselves as follows:

`<name>: BraiiiiiiinnnzzzZ...`

Don’t print the angle brackets (< and >). For a zombie named Foo, the message would be:

`Foo: BraiiiiiiinnnzzzZ...`

Then, implement the two following functions:
- **Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function scope.

- **void randomChump( std::string name );**
It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case 
it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must 
print a message with the name of the zombie for debugging purposes.
