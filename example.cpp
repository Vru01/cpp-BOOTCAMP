#include <iostream>

// Base class
class Base {
public:
    void publicFunction() {
        std::cout << "Base::publicFunction()" << std::endl;
    }

protected:
    void protectedFunction() {
        std::cout << "Base::protectedFunction()" << std::endl;
    }

private:
    void privateFunction() {
        std::cout << "Base::privateFunction()" << std::endl;
    }
};

// Derived class with public inheritance
class PublicDerived : public Base {
public:
    void derivedFunction() {
        // The public and protected members of the base class are accessible
        publicFunction();
        protectedFunction();
        // privateFunction(); // This would be a compilation error
        std::cout << "PublicDerived::derivedFunction()" << std::endl;
    }
};

// Derived class with protected inheritance
class ProtectedDerived : protected Base {
public:
    void derivedFunction() {
        // The public and protected members of the base class are accessible
        publicFunction();
        protectedFunction();
        // privateFunction(); // This would be a compilation error
        std::cout << "ProtectedDerived::derivedFunction()" << std::endl;
    }
};

// Derived class with private inheritance
class PrivateDerived : private Base {
public:
    void derivedFunction() {
        // The public and protected members of the base class are now private in the derived class
        // So, they are accessible within the derived class, but not outside it
        publicFunction();
        protectedFunction();
        // privateFunction(); // This would be a compilation error
        std::cout << "PrivateDerived::derivedFunction()" << std::endl;
    }
};

int main() {
    PublicDerived publicDerivedObj;
    publicDerivedObj.publicFunction();    // Accessible
    // publicDerivedObj.protectedFunction(); // Compilation error
    // publicDerivedObj.privateFunction();   // Compilation error
    publicDerivedObj.derivedFunction();    // Accessible

    ProtectedDerived protectedDerivedObj;
    // protectedDerivedObj.publicFunction();    // Compilation error
    // protectedDerivedObj.protectedFunction(); // Compilation error
    // protectedDerivedObj.privateFunction();   // Compilation error
    protectedDerivedObj.derivedFunction();    // Accessible within the derived class

    PrivateDerived privateDerivedObj;
    // privateDerivedObj.publicFunction();    // Compilation error
    // privateDerivedObj.protectedFunction(); // Compilation error
    // privateDerivedObj.privateFunction();   // Compilation error
    privateDerivedObj.derivedFunction();    // Accessible within the derived class

    return 0;
}

