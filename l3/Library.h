#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Book {
    private:
        string name;
        string author;
        int yearPublished;
        int numberOfPages;
        int id;

    public:
        Book(int id, string name, string author, int yearPublished, int numberOfPages) {
            this->id = id;
            this->name = name;
            this->author = author;
            this->yearPublished = yearPublished;
            this->numberOfPages = numberOfPages;
        }

        string getName() {
            return name;
        }

        string getAuthor() {
            return author;
        }

        int getYearPublished() {
            return yearPublished;
        }

        int getId() {
            return id;
        }

        int getNumberOfPages() {
            return numberOfPages;
        }

        void toString() {
            cout << "Book [name=" << name << ", author=" << author << ", yearPublished=" << yearPublished << ", numberofPages=" << numberOfPages << ", id="
            << id << "]" << endl;
        }

        /*
         * Compares the target book with b to determine order and returns:
		 * positive number:  if target > b
		 * 0: if they're equal
		 * negative number: if target < b
         */
        int compareTo(Book book) {
            return this->getId() - book.getId();
        }

        /*
         * Compares the target book with the parameter obj to determine if they are the same object.
         */
        bool equals(Book obj) {
            return this->getId() == obj.getId() && this->getName().compare(obj.getName()) == 0 && this->getAuthor().compare(obj.getAuthor()) == 0 && this->yearPublished == obj.getYearPublished()
            && this->getNumberOfPages() == obj.getNumberOfPages();
        }
};





class Library {
    private:
        vector<Book> bookshelf;

    public:
        Library(vector<Book> bookshelf) {
            this->bookshelf = bookshelf;
        }

        vector<Book> getBookshelf() {
            return bookshelf;
        }

        /*
        * Helper method to swap the position of two objects in a given array
        *
        * @param bookshelf - vector we're going to work in
        * @param a - index of the first object to swap
        * @param b - index of the second object to swap
        */
        static void swap(vector<Book> &v, int a, int b){
            iter_swap(v.begin() + a, v.begin() + b);
        }

        /*
         * Linear Algorithm to find the index of a given target.
         *
         * @param bookshelf - Array where search takes place
         * @param target - Book to be searched for
         * @return Index of the target book (-1 if not found)
         */
        int interativeLinearSearch(vector<Book> bookshelf, Book target){
            for (int i = 0; i < bookshelf.size(); ++i) {
                if(bookshelf[i].equals(target)) return i; // Book was found
            }
            return -1; // Book was not found
        }

        /*
         * Linear Algorithm to find the index of a given target.
         * Iterates though the whole array having a complexity of O<img class="icon emoticon" alt="No" title="No" src="https://online.upr.edu/theme/image.php/fordson/core/1669595636/s/no" /> in the worst case scenario
         *
         * @param bookshelf - Target array
         * @param target - Target object
         * @return - Index of the target book (-1 if not found)
         */
        int recursiveLinearSearch(vector<Book> bookshelf, Book target);

        /*
         * Linear search helper
         *
         * @param bookshelf -  Vector where the search takes place
         * @param index - Index of the current object we are comparing the target with
         * @param target - Book to be searched for
         * @return Index of what was found (-1 if not found)
         */
        int linearHelper(vector<Book>, int index, Book target) {
            if(index >= bookshelf.size()) return -1; // Book was never found, exiting recursion
            if(target.equals(bookshelf[index])) return index; // Book was found
            return linearHelper(bookshelf, index+1, target); // Increase index to "iterate" through the vector
        }


        static int binarySearch(vector<Book> bookshelf, Book target);
        static int binarySearchHelper(vector<Book> bookshelf, Book target, int left, int right);


        /*
         * EXERCISE B(20 points):
  
         * Implement a iterative Bubble Sort for a vector books
         *
         * @param bookshelf - Vector to be sorted
         * @return A sorted copy fo the bookshelf array
         */
        static vector<Book> bubbleSort(vector<Book> bookshelf);
        static vector<Book> insertionSort(vector<Book> bookshelf);
        static vector<Book> insertionSortHelper(vector<Book> bookshelf, int i);

        vector<Book> selectionSort(vector<Book> bookshelf) {
            vector<Book> unsortedBookshelf = this->bookshelf;
            return selectionSortHelper(unsortedBookshelf, 0);
        }

        vector<Book> selectionSortHelper(vector<Book> bookshelf, int tailIndex);
};
