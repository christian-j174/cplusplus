#include "StarterCode.hpp"

/* Collectable Interface */
class Collectable {
  public:
    virtual int getCentury() = 0;

    virtual bool isSuccessful() = 0;

    virtual bool isLegit() = 0;
};

/* Exercise 6A
 * YOU MUST CHANGE THIS BELOW WITH YOUR CURRENT PAINTING CLASS
 * AND IMPLEMENT THE COLLECTABLE METHODS IN PAINTING AFTER THE
 * INHERITING
 */


class Painting : public Art, public Collectable{
  private:
    bool replica;

  public:
    // Null Constructor
    Painting(){};

    // Parameterized Constructor
    Painting(string name, Artist artist, Style style, int year, bool replica): Art(name, artist, style, year) {this->replica = replica; }

    // Getters
    bool isReplica() const { return replica; }

    // Setters
    void setReplica(bool isReplica) { this->replica = isReplica; }


    virtual int getCentury(){return (( getYear() / 100 ) +1 ); }

    virtual bool isSuccessful() {
      if(getArtist().getFameScore() > 5 && (getStyle().getDominantEra().first <= getYear() && getYear() <= getStyle().getDominantEra().second ) ){return true; }
      return false; 
    }

    virtual bool isLegit(){return !(isReplica()); }

    static int countPaintings(const vector<Painting *> &collection, Style style, int start, int end);

    int appraise() {
    if(!(isReplica()) && artist.getFameScore() > 8) {return Art::appraise() * 1.54; }
    else if(!(isReplica()) && (artist.getFameScore() >= 5 && artist.getFameScore() <= 8)) {return Art::appraise() * 1.27; }
    else if(!(isReplica()) && artist.getFameScore() < 5) {return Art::appraise() * 1.11; }
    else {return Art::appraise(); }
}
};




/* Exercise 6B
 * YOU MUST CHANGE THIS BELOW WITH YOUR CURRENT SCULPTURE CLASS
 * AND IMPLEMENT THE COLLECTABLE METHODS IN SCULPTURE AFTER THE
 * INHERITING
 */


class Sculpture : public Art, public Collectable {
  private:
    Material material;

  public:
    // Null Constructor
    Sculpture(){};

    // Parameterized Constructor
    Sculpture(string name, Artist artist, Style style, int year, Material material): Art(name,artist,style,year) {this->material = material; }

    // Getters
    Material getMaterial() const { return material; }

    // Setters
    void setMaterial(Material material) { this->material = material; }


    virtual int getCentury(){return (( getYear() / 100 ) +1 ); }

    virtual bool isSuccessful() {
      if(getArtist().getFameScore() > 5 && (getStyle().getDominantEra().first <= getYear() && getYear() <= getStyle().getDominantEra().second ) ){return true; }
      return false; 
    }

    virtual bool isLegit(){
      if(getMaterial() != PLASTIC) return true;
      return false;
    }


    // Methods
    /*
     * Given a vector of Art pieces, return a vector containing only the
     * Sculptures in the original vector. You must use dynamic casting to
     * determine whether an Art piece is a Sculpture or not .
     */
    //static vector<Sculpture *> segregateSculptures(const vector<Art *> &collection);

    vector<Sculpture *> Sculpture::segregateSculptures(const vector<Art *> &collection) {
        vector<Sculpture *> result;
        for(int i = 0; i < collection.size(); i++) {
            Sculpture* tmp = dynamic_cast<Sculpture*>(collection[i]);
            if(tmp != nullptr) result.push_back(tmp);
        }
        return result;
    }


};
