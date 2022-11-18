/*

 1 // This program demonstrates a recursive function that exhaustively 
 2 // searches through all possible combinations of coin values to find 
 3 // the best way to make change for a specified amount. 
 4 #include <iostream> 
 5 using namespace std; 
 6
 7 // Constants 
 8 const int MAX_COINS_CHANGE = 100; // Max number of coins to give in change 
 9 const int MAX_COIN_VALUES = 6; // Max number of coin values 
 10 const int NO_SOLUTION = INT_MAX; // Indicates no solution 
 11
 12 // Function prototype 
 13 void makeChange(int, int, int[], int); 
 14
 15 // coinValues − global array of coin values to choose from 
 16 int coinValues[MAX_COIN_VALUES] = {100, 50, 25, 10, 5, 1 }; 
 17
 18 // bestCoins − global array of best coins to make change with 
 19 int bestCoins[MAX_COINS_CHANGE]; 
 20
 21 // Global variables 
 22 int numBestCoins = NO_SOLUTION, // Number of coins in bestCoins 
 23 numSolutions = 0, // Number of ways to make change 
 24 numCoins; // Number of allowable coins 
 25
 26
 27 int main() 
 28 { 
 29 int coinsUsed[MAX_COINS_CHANGE], // List of coins used 
 30 numCoinsUsed = 0, // The number of coins used 
 31 amount; // The amount to make change for 
 32
 33 // Display the possible coin values. 
 34 cout << "Here are the valid coin values, in cents: "; 
 35 for (int index = 0; index < 5; index++) 
 36 cout << coinValues[index] << " "; 
 37 cout << endl; 
 38
 39 // Get input from the user. 
 40 cout << "Enter the amount of cents (as an integer) " 
 41 << "to make change for: "; 
 42 cin >> amount; 
 43 cout << "What is the maximum number of coins to give as change? "; 
 44 cin >> numCoins; 
 45
 46 // Call the recursive function. 
 47 makeChange(numCoins, amount, coinsUsed, numCoinsUsed); 
 48
 49 // Display the results. 
 50 cout << "Number of possible combinations: " << numSolutions << endl; 
 51 cout << "Best combination of coins:\n"; 
 52 if (numBestCoins == NO_SOLUTION) 
 53 cout << "\tNo solution\n";
  54 else 
 55 { 
 56 for (int count = 0; count < numBestCoins; count++) 
 57 cout << bestCoins[count] << " "; 
 58 } 
 59 cout << endl; 
 60 return 0; 
 61 } 
 62
 63 //**********************************************************************
 64 // Function makeChange. This function uses the following parameters: * 
 65 // coinsLeft − The number of coins left to choose from. * 
 66 // amount − The amount to make change for. * 
 67 // coinsUsed − An array that contains the coin values used so far. * 
 68 // numCoinsUsed − The number of values in the coinsUsed array. * 
 69 // * 
 70 // This recursive function finds all the possible ways to make change * 
 71 // for the value in amount. The best combination of coins is stored in * 
 72 // the array bestCoins. * 
 73 //**********************************************************************
 74
 75 void makeChange(int coinsLeft, int amount, int coinsUsed[], 
 76 int numCoinsUsed) 
 77 { 
 78 int coinPos, // To calculate array position of coin being used 
 79 count; // Loop counter 
 80
 81 if (coinsLeft == 0) // If no more coins are left 
 82 return; 
 83 else if (amount < 0) // If amount to make change for is negative 
 84 return; 
 85 else if (amount == 0) // If solution is found 
 86 { 
 87 // Store as bestCoins if best 
 88 if (numCoinsUsed < numBestCoins) 
 89 { 
 90 for (count = 0; count < numCoinsUsed; count++) 
 91 bestCoins[count] = coinsUsed[count]; 
 92 numBestCoins = numCoinsUsed; 
 93 } 
 94 numSolutions++; 
 95 return; 
 96 } 
 97
 98 // Find the other combinations using the coin 
 99 coinPos = numCoins − coinsLeft; 
100 coinsUsed[numCoinsUsed] = coinValues[coinPos]; 
101 numCoinsUsed++; 
102 makeChange(coinsLeft, amount − coinValues[coinPos], 
103 coinsUsed, numCoinsUsed); 
104
105 // Find the other combinations not using the coin. 
106 numCoinsUsed−−; 
107 makeChange(coinsLeft − 1, amount, coinsUsed, numCoinsUsed); 
 108 } 



// QuickSort ALgo 

// This program demonstrates the QuickSort Algorithm. 
 2 #include <iostream> 
 3 using namespace std; 
 4
 5 // Function prototypes 
 6 void quickSort(int [], int, int); 
 7 int partition(int [], int, int); 
 8 void swap(int &, int &); 
 9
10 int main() 
11 { 
12 const int SIZE = 10; // Array size 
13 int count; // Loop counter 
14 int array[SIZE] = {7, 3, 9, 2, 0, 1, 8, 4, 6, 5}; 

16 // Display the array contents. 
17 for (count = 0; count < SIZE; count++) 
18 cout << array[count] << " "; 
19 cout << endl; 
20
21 // Sort the array. 
22 quickSort(array, 0, SIZE − 1); 
23
24 // Display the array contents. 
25 for (count = 0; count < SIZE; count++) 
26 cout << array[count] << " "; 
27 cout << endl; 
28 return 0; 
29 } 
30
31 //************************************************ 
32 // quickSort uses the quicksort algorithm to * 
33 // sort set, from set[start] through set[end]. * 
34 //************************************************ 
35
36 void quickSort(int set[], int start, int end) 
37 { 
38 int pivotPoint; 
39
40 if (start < end) 
41 { 
42 // Get the pivot point. 
43 pivotPoint = partition(set, start, end); 
44 // Sort the first sublist. 
45 quickSort(set, start, pivotPoint − 1); 
46 // Sort the second sublist. 
47 quickSort(set, pivotPoint + 1, end); 
48 } 
49 } 
50
51 //********************************************************** 
52 // partition selects the value in the middle of the * 
53 // array set as the pivot. The list is rearranged so * 
54 // all the values less than the pivot are on its left * 
55 // and all the values greater than pivot are on its right. * 
56 //********************************************************** 
57
58 int partition(int set[], int start, int end) 
59 { 
60 int pivotValue, pivotIndex, mid; 
61
62 mid = (start + end) / 2; 
63 swap(set[start], set[mid]); 
64 pivotIndex = start; 
65 pivotValue = set[start]; 
66 for (int scan = start + 1; scan <= end; scan++) 
67 { 
68 if (set[scan] < pivotValue) 
69 { 
70 pivotIndex++; 
71 swap(set[pivotIndex], set[scan]); 
72 } 
73 } 
74 swap(set[start], set[pivotIndex]); 
75 return pivotIndex; 
76 } 
77
78 //****************************************** 
79 // swap simply exchanges the contents of * 
80 // value1 and value2. * 
81 //****************************************** 
82
83 void swap(int &value1, int &value2) 
84 { 
85 int temp = value1; 
86
87 value1 = value2; 
88 value2 = temp; 
89 } 



 // This program displays a solution to the Towers of 
 2 // Hanoi game. 
 3 #include <iostream> 
 4 using namespace std; 
 5
 6 // Function prototype 
 7 void moveDiscs(int, int, int, int); 
 8
 9 int main() 
10 { 
11 const int NUM_DISCS = 3; // Number of discs to move 
12 const int FROM_PEG = 1; // Initial "from" peg 
13 const int TO_PEG = 3; // Initial "to" peg 
14 const int TEMP_PEG = 2; // Initial "temp" peg 
15
16 // Play the game. 
17 moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG); 
18 cout << "All the pegs are moved!\n";
19 return 0; 
20 } 
21
22 //*************************************************** 
23 // The moveDiscs function displays a disc move in * 
24 // the Towers of Hanoi game. * 
25 // The parameters are: * 
26 // num: The number of discs to move. * 
27 // fromPeg: The peg to move from. * 
28 // toPeg: The peg to move to. * 
29 // tempPeg: The temporary peg. * 
30 //*************************************************** 
31
32 void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg) 
33 { 
34 if (num > 0) 
35 { 
36 moveDiscs(num − 1, fromPeg, tempPeg, toPeg); 
37 cout << "Move a disc from peg " << fromPeg 
38 << " to peg " << toPeg << endl; 
39 moveDiscs(num − 1, tempPeg, toPeg, fromPeg); 
40 } 
41 }




























*/