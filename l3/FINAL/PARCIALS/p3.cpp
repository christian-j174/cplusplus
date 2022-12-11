#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Material {
    BRICK,
    CONCRETE,
    WOOD,
    STONE,
    GLASS
};

/**
 * ! EXERCISE #3A -- DEFINE A NEW Registered INTERFACE
 *
 * @brief An interface that represents a property registered with the city.
 *
 * It should contain an abstract method getLocation().
 * This method returns the location of the registered property as a string.
 */

class Registered {

    // TODO EX #3A -- Complete the Interface class
    // ADD YOUR CODE HERE
};

/**
 * ! EXERCISE #1 -- COMPLETE ABSTRACT BUILDING CLASS. REFACTOR SUBCLASSES.
 *
 * ! EXERCISE #3 -- BUILDING SUBCLASS OF REGISTERED.
 *
 */

class Building {
  public:
    /**
     * EXERCISE #1A -- Make House and Store inherit from this class.
     *
     * EXERCISE #1B:
     * Add common properties and methods from House and Store classes to Building class.
     * Declare properties as "protected". Rest as "public".
     * The abstract class should supply an appropriate constructor to be used by subclasses.
     *
     */

    // TODO: Exercise #1: Add common properties and methods from subclasses.
    // TODO: Exercise #1: Add a constructor.

    /**
     * ! EXERCISE #4 (Part A):
     *
     * ADD ABSTRACT METHOD getCapacity() that returns an integer value
     * that represents the max capacity of persons allowed in a property.
     *
     * Each subclass of Building will implement a particular version of this method.
     */
    // TODO EXERCISE #4 (Part A) -- Add an abstract method (getCapacity) to the Building class
    // ADD YOUR CODE HERE

    /**
     * ! EXERCISE #5 IMPLEMENT RECURSIVE MIN METHOD
     *
     * This method finds the newest Building within a vector.
     * If the vector is empty the method returns -1.
     *
     * The method MUST BE RECURSIVE.
     */
    static int findNewestBuilding(vector<Building *> buildings) {
        return -11;
    }

    /**
     * ! EXERCISE #6 -- IMPLEMENT A RECURSIVE SEARCH METHOD
     *
     * Returns true if and only if some building of the specified Material (enum)
     * exists in a given city within the parameter vector of Buildings.
     *
     * The method MUST BE RECURSIVE.
     */
    static bool existMaterialFromCity(vector<Building *> &buildings, string city, Material material) {
        return true || false;
    }

    /**
     * ! EXERCISE #7 -- IMPLEMENT A RECURSIVE SEARCH METHOD
     *
     * Count the buildings that are younger than parameter building.
     * If the vector is empty the method returns -1.
     *
     * The method MUST BE RECURSIVE.
     */
    static unsigned int countYoungerBuildings(vector<Building *> buildings) {
        return 999;
    }

}; // End of abstract Building class

/**
 * ! Exercise #2 (Part A)
 *
 * Re-factor this House class to remove any property or method that was
 * moved to the abstract Building class.
 *
 * You should modify the constructor to call the super constructor appropriately.
 *
 * This class represents a House Building
 */
class House {
  private:
    string city;
    int buildingNumber;
    int age;  // age of building in years
    int area; // area in sq. ft.
    Material material;
    string neighborhood;
    vector<string> residents;

  public:
    House(string city, string neighborhood, int buildingNumber, int age, int area, Material material) {
        this->city = city;
        this->neighborhood = neighborhood;
        this->buildingNumber = buildingNumber;
        this->age = age;
        this->area = area;
        this->material = material;
    }
    string getCity() { return city; }
    int getBuildingNumber() { return buildingNumber; }
    int getAge() { return age; }
    int getArea() { return area; }
    Material getMaterial() { return material; }
    string getNeighborhood() { return neighborhood; }
    vector<string> getResidents() { return residents; }

    void setCity(string city) { this->city = city; }
    void setBuildingNumber(int buildingNumber) { this->buildingNumber = buildingNumber; }
    void setAge(int age) { this->age = age; }
    void setArea(int area) { this->area = area; }
    void setMaterial(Material material) { this->material = material; }
    void setNeighborhood(string n) { neighborhood = n; }
    void setResidents(vector<string> r) { residents = r; }

    /**
     * ! EXERCISE #3 (Part B) -- IMPLEMENT Registered interface method
     *
     * A house location has the following format:
     *  "neighborhood, buildingNumber, age"
     */
    string getLocation() {
        return ""; // Dummy return
    }

    /**
     * ! EXERCISE #4 (Part B) Implement ABSTRACT METHOD getCapacity() in House class
     *
     * A House's max capacity is twice the amount of residents assigned to a house.
     */
    // TODO EX #4 (Part B) -- Implement abstract method getCapacity() in House class

}; // End of House class

/**
 * ! Exercise #2 (Part B)
 *
 * Re-factor this class to remove any property or method that was
 * moved to the Abstract Building class.
 *
 * You should modify the constructor to call the super constructor appropriately.
 *
 * This class represents a Store Building.
 */

class Store {
  private:
    string storeName;
    string city;
    int buildingNumber;
    int age;  // age of building in years
    int area; // area in sq. ft.
    Material material;

  public:
    Store(string storeName, string city, int buildingNumber, int age, int area, Material material) {
        this->storeName = storeName;
        this->city = city;
        this->buildingNumber = buildingNumber;
        this->age = age;
        this->area = area;
        this->material = material;
    }
    string getStoreName() { return storeName; }
    string getCity() { return city; }
    int getBuildingNumber() { return buildingNumber; }
    int getAge() { return age; }
    int getArea() { return area; }
    Material getMaterial() { return material; }

    void setStoreName(string storeName) { this->storeName = storeName; }
    void setCity(string city) { this->city = city; }
    void setBuildingNumber(int buildingNumber) { this->buildingNumber = buildingNumber; }
    void setAge(int age) { this->age = age; }
    void setArea(int area) { this->area = area; }
    void setMaterial(Material material) { this->material = material; }

    /**
     * ! EXERCISE #3 (Part C) -- IMPLEMENT Registered interface method
     *
     * A store location has the following format: "city, buildingNumber, area".
     */
    string getLocation() {
        return ""; // Dummy return
    }

    /**
     * ! EXERCISE #4 (Part C) Implement ABSTRACT METHOD getCapacity() in Store class
     *
     * A Store's max capacity is based on it's area (sq. ft.):
     * 2 persons per each 10ft. by 10ft. block of space in the store.
     */
    // TODO EX #4 (Part C) -- Implement abstract method getCapacity() in Store class

}; // End of Store class

int main() {
    cout << "Testing" << endl;
    vector<Building *> allBuildings;
    vector<Building *> oneBuilding;
    vector<Building *> noBuildings;
    vector<Store *> stores;
    vector<House *> houses;

    stores.push_back(new Store("Pharmacy", "Mayaguez", 1, 25, 200000, Material::CONCRETE));
    stores.push_back(new Store("Bookstore", "Aguada", 1, 20, 150000, Material::CONCRETE));
    stores.push_back(new Store("Boutique", "Cabo Rojo", 1, 10, 15000, Material::CONCRETE));
    stores.push_back(new Store("Tailor", "Aguada", 2, 15, 13000, Material::STONE));
    stores.push_back(new Store("Barber Shop", "Ponce", 1, 7, 12000, Material::CONCRETE));

    houses.push_back(new House("Terrace", "Mayaguez", 2, 55, 3000, Material::CONCRETE));
    houses.push_back(new House("Miradero", "Mayaguez", 3, 45, 4000, Material::CONCRETE));
    houses.push_back(new House("Junquito", "Ponce", 2, 20, 2500, Material::BRICK));
    houses.push_back(new House("Villa Lobo", "Cabo Rojo", 2, 22, 1800, Material::WOOD));
    houses.push_back(new House("Tras Talleres", "Cabo Rojo", 3, 10, 2100, Material::BRICK));

    // for (Store *s : stores)
    //     allBuildings.push_back(s);

    // for (House *h : houses)
    //     allBuildings.push_back<img class="icon emoticon" alt="corazón" title="corazón" src="https://online.upr.edu/theme/image.php/fordson/core/1668539268/s/heart" />;
    
    // oneBuilding.push_back(stores[0]);

    cout << boolalpha;

    // cout << "================== EXERCISE #1A ==================" << endl;
    // cout << "Store subclass of Building? " << (dynamic_cast<Building*>(stores[0]) != nullptr) << endl;
    // cout << "House subclass of Building?" << (dynamic_cast<Building*>(houses[0]) != nullptr) << endl;

    // cout << "================== EXERCISE #1B ==================" << endl;
    // cout << "Building getCity? " << allBuildings[0]->getCity() << endl;
    // cout << "Building getBuildingNumber? " << allBuildings[0]->getBuildingNumber() << endl;
    // cout << "Building getAge? " << allBuildings[0]->getAge() << endl;
    // cout << "Building getArea? " << allBuildings[0]->getArea() << endl;
    // cout << "Building getMaterial? " << allBuildings[0]->getMaterial() << endl;

    // cout << "================== EXERCISE #2 ==================" << endl;
    // cout << "Building getCity? " << allBuildings[0]->getCity() << endl;
    // cout << "Building getBuildingNumber? " << allBuildings[0]->getBuildingNumber() << endl;
    // cout << "Building getAge? " << allBuildings[0]->getAge() << endl;
    // cout << "Building getArea? " << allBuildings[0]->getArea() << endl;
    // cout << "Building getMaterial? " << allBuildings[0]->getMaterial() << endl;

    // cout << "================== EXERCISE #3 ==================" << endl;
    // cout << "Store subclass of Registered? " << (dynamic_cast<Registered*>(stores[0]) != nullptr) << endl;
    // cout << "House subclass of Registered? " << (dynamic_cast<Registered*>(houses[0]) != nullptr) << endl;
    // vector<Registered *> registered{houses[0], stores[0]};
    // cout << "Is Registered a Building? " << (dynamic_cast<Building*>(registered[0]) != nullptr) << endl;
    // cout << "Is Registered a Building? " << (dynamic_cast<Building*>(registered[1]) != nullptr) << endl;

    // cout << "================== EXERCISE #4 ==================" << endl;
    // cout << stores[0]->getCapacity() << endl;
    // cout << houses[0]->getCapacity() << endl;


    // cout << "================== EXERCISE #5 ==================" << endl;
    // cout << "Youngest in stores: " << Building::findNewestBuilding(allBuildings) << endl;
    // cout << "Youngest in houses: " << Building::findNewestBuilding(oneBuilding) << endl;
    // cout << "Youngest in houses: " << Building::findNewestBuilding(noBuildings) << endl;

    // cout << "================== EXERCISE #6 ==================" << endl;
    // cout << "Ponce contains a GLASS building? " << Building::existMaterialFromCity(allBuildings, "Ponce", GLASS) << endl;
    // cout << "Ponce contains a BRICK building? " << Building::existMaterialFromCity(allBuildings, "Ponce", BRICK) << endl;
    
    // cout << "================== EXERCISE #7 ==================" << endl;
    // House *myHouse = new House("Hormigueros", "Lavadero", 6405, 9, 10000, Material::CONCRETE);
    // cout << "How many buildings are younger than myHouse? " << myHouse->countYoungerBuildings(allBuildings) << endl;
    // cout << "How many buildings are younger than myHouse? " << myHouse->countYoungerBuildings(oneBuilding) << endl;
    // cout << "How many buildings are younger than myHouse? " << myHouse->countYoungerBuildings(empty) << endl;

    return 0;
}
