# Inheritance

## Experiment 14

### Aim
To study and implement Inheritance

### Theory
The capability of a class to derive properties and characteristics from another class is called **Inheritance**. Inheritance is one of the most important features of Object-Oriented Programming.

Inheritance is a feature or a process in which new classes are created from existing classes. The new class created is called the **derived class** or **child class**, while the existing class is known as the **base class** or **parent class**. The derived class is said to inherit from the base class.

### Modes of Inheritance
- **Public Mode:** 
  - If we derive a subclass from a public base class, then the public members of the base class will become public in the derived class, and the protected members of the base class will become protected in the derived class.

- **Protected Mode:** 
  - If we derive a subclass from a protected base class, then both public and protected members of the base class will become protected in the derived class.

- **Private Mode:** 
  - If we derive a subclass from a private base class, then both public and protected members of the base class will become private in the derived class.

### Types of Inheritance
- **Single Inheritance:** 
  - In single inheritance, a class is allowed to inherit from only one class, meaning one subclass is inherited from one base class only.
 **Example:**

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class method." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class method." << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // Calls Base class method
    obj.show();     // Calls Derived class method
    return 0;
}
```

- **Multiple Inheritance:** 
  - In multiple inheritance, a class can inherit from more than one class, meaning one subclass is inherited from more than one base class.
   **Example:**
  ```cpp
  #include <iostream>
  using namespace std;

  class Base1 {
  public:
    void displayBase1() {
        cout << "Base1 class method." << endl;
    }
  };

  class Base2 {
  public:
    void displayBase2() {
        cout << "Base2 class method." << endl;
    }
  };

  class Derived : public Base1, public Base2 {
  public:
    void show() {
        cout << "Derived class method." << endl;
    }
  };

  int main() {
    Derived obj;
    obj.displayBase1(); // Calls Base1 method
    obj.displayBase2(); // Calls Base2 method
    obj.show();         // Calls Derived method
    return 0;
  }
  ```

- **Multilevel Inheritance:** 
  - In this type of inheritance, a derived class is created from another derived class.
  **Example:**
```cpp
      #include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class method." << endl;
    }
};

class Intermediate : public Base {
public:
    void show() {
        cout << "Intermediate class method." << endl;
    }
};

class Derived : public Intermediate {
public:
    void print() {
        cout << "Derived class method." << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // Calls Base method
    obj.show();     // Calls Intermediate method
    obj.print();    // Calls Derived method
    return 0;
}
```

- **Hierarchical Inheritance:** 
  - In this type of inheritance, more than one subclass is inherited from a single base class, meaning multiple derived classes are created from a single base class.
  **Example:**
 ```cpp
      #include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class method." << endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        cout << "Derived1 class method." << endl;
    }
};

class Derived2 : public Base {
public:
    void show() {
        cout << "Derived2 class method." << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    
    obj1.display(); // Calls Base method
    obj1.show();    // Calls Derived1 method
    
    obj2.display(); // Calls Base method
    obj2.show();    // Calls Derived2 method
    
    return 0;
}
```
 
## Algorithms for Types of Inheritance

### 1. Single Inheritance

**Start**

- **Class Definition**
  - Define a base class `Base`.
  - Define a derived class `Derived` that inherits from `Base`.

- **Main Function**
  - Create an object of `Derived`.
  - Call methods of both `Derived` and `Base`.

**End**

---

### 2. Multiple Inheritance

**Start**

- **Class Definitions**
  - Define base class `Base1`.
  - Define base class `Base2`.
  - Define a derived class `Derived` that inherits from both `Base1` and `Base2`.

- **Main Function**
  - Create an object of `Derived`.
  - Call methods of `Base1` and `Base2` from the `Derived` object.

**End**

---

### 3. Multilevel Inheritance

**Start**

- **Class Definitions**
  - Define a base class `Base`.
  - Define a derived class `Intermediate` that inherits from `Base`.
  - Define another derived class `Derived` that inherits from `Intermediate`.

- **Main Function**
  - Create an object of `Derived`.
  - Call methods from `Derived`, `Intermediate`, and `Base`.

**End**

---

### 4. Hierarchical Inheritance

**Start**

- **Class Definition**
  - Define a base class `Base`.
  - Define multiple derived classes (e.g., `Derived1`, `Derived2`) that inherit from `Base`.

- **Main Function**
  - Create objects of `Derived1` and `Derived2`.
  - Call methods from `Derived1`, `Derived2`, and `Base`.

**End**

