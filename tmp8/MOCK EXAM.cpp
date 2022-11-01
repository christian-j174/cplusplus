  
  

#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum AccountType
{
    SAVINGS,
    CHECKING,
    ENTERPRISE
};

class Account
{
private:
    int accNo;
    double balance;
    AccountType accType;
    int trxsCurrentMonth;

public:
    Account(int accNum, double bal, AccountType type){
        this->accNo = accNum;
        this->balance = bal;
        this->accType = type;
        this->trxsCurrentMonth = 0;

    }

    AccountType getType() { return accType; }
    int getAccNo() { return this->accNo; }
    double getBalance() { return this->balance; }
    int getTrxsCurrentMonth() { return trxsCurrentMonth; }

    void setBalance(double bal) { this->balance = bal; }
    void setTrxsCurrentMonth(int trxs) { trxsCurrentMonth = trxs; }

    string toString()
    {
        string result = "";
        result += "AccNo: ";
        result += to_string(this->accNo);
        result += ", Balance: ";
        result += to_string(this->balance);
        result += ", AccType: ";
        if(this->getType()==ENTERPRISE)
            result += "ENTERPRISE";
        if(this->getType()==SAVINGS)
            result += "SAVINGS";
        if(this->getType()== CHECKING)
            result += "CHECKING";
        return result;
    }

    // Instance methods
    // Returns true if target Account exists in the parameter vector
    bool exists(vector<Account> v)
    {
        for (int i=0; i<v.size(); i++) {
            if (this->getAccNo() == v[i].getAccNo()) return true;
        }
        return false;
    }

    // EXERCISE #1: Return the position of the first occurence of an account of the given
    // type within the vector of Account's. Returns -1 if no such Account exists.
    static int findByType(vector<Account> accounts, AccountType type);
    for(int i=0;i<accounts.size();i++)
    {
        if(accounts[i].getType()==type)
        {
            return i;
        }
        
    }

    return -1;
    }


    // EXERCISE #2: Returns de count of Account's of the parameter type that exist in the 
    // parameter vector.
    static int countByType(vector<Account> accounts, AccountType type);
 {   
    int result =0;
    for(Account a:accounts) {
        if (a.getType() == type){
            result++;               ///EL RESULT VA AFUERA DEL LOOP

        }
    }
        return result;
 }
 {
    int result = 0;
    for(Account a : accounts) {
        if (a.getType() == type) {
            result++;
        }
    }
    return result;
}


    // EXERCISE #3: Return the position of the Account with the largest balance in the 
    // parametter vector. Returns -1 if the vector is empty.
    static int largestBalance(vector<Account> accounts);{
     if(accounts.empty()) return -1; 
     int parameter = 0;
     for(int i=0;i<accounts.size();i++){
        if(accounts[i].getBalance()>parameter){
            return i;
        }
     }

     {//no need for the parameter
     //you need to start at 1 bc i canonnot start at 0 and be comparted to be larger than it
    if(accounts.empty()) return -1;
     int pos =0;
     for(int i=1;i<accounts.size();i++){
        if(accounts[i].getBalance()>accounts[pos].getBalance()){//you compare essentialy to the first balance
            pos = i;
        }
     }
     return pos;
}

    }
		// EXERCISE #4: Returns the average balance of all the Account's of the parameter type
		// in the parameter vector.  Returns -1 if the vector does not contain any accounts
		// of that type.
    static double averageBalance(vector<Account> accounts, AccountType type);{
    double sum=0;
    double avg =0;
    double total_acc =0;
    for(Account a:accounts){
        if(a.getType()==type){
        sum = sum+a.getBalance();
        total_acc++;
    }
    }
    return ((total_acc > 0) ? (sum / total_acc) : -1);
/********/ Se tiene que probar que no es 0 el total_acc;
podria ser 
    if(total_acc>0){
        return avg= sum/total_acc;
    }
    else{
        return -1;
    }
    }
    // EXERCISE #5: Returns true if there are at least two Account's of the same type and
    // with equal balances within the parametter vector.
    static int hasDuplicates(vector<Account> accounts);
    {
        //you cannot use a for each because that just goes aroung vector v inter of a new vector
        //you need a nested to check both with different but same pos
        for(int i=0;i<accounts.size();i++){
            for(int j=i+1;j<accounts.size();j++){
                if(accounts[i].getType()==accounts[j].getBalance(&&accounts[i].getType()==accounts[j].getBalance())
                return true;
                else{
                    return false;
                }
            }
        }

        /******/
        for (int i=0; i<accounts.size(); i++) {
        for (int j=i+1; j<accounts.size(); j++) {
            if ((accounts[i].getAccNo() == accounts[j].getAccNo()) && 
            (accounts[i].getType() == accounts[j].getType())) {
                return true;
            }
        }
    } 
    return false;
    }

    // EXERCISE #6: Remove the first occurrence of an Account with a negative balance if 
    // such an Account exists in the pameter vector.  Leaves vector unchanged otherwise.
    static void removeFirstNegative(vector<Account> &accounts);{
       int negativePos = -1;
        for(int i=0;i<accounts.size();i++){//erase requiere el lugar de la cuenta
        if(accounts[i].getBalance()<1){
            negativePos = i;
            accounts.erase(accounts.begin()+i);
            break;

        }
     }
//also works withouth the negativePos
    
    }

    // EXERCISE #7: Remove all ocurrences of Accounts with a negative balances if 
    // such Account's exist in the pameter vector.  Leaves vector unchanged otherwise.
    static void removeAllNegative(vector<Account> &accounts);
 
   int i=0;
    while (i<accounts.size()){
        if(accounts[i].getBalance()<0){
            accounts.erase(accounts.begin()+i);
            
        }
        else{i++;}

        //Fucniono cuando el i++ esta fuera del if y en un else. El else es necesario para este caso
}

    // EXERCISE #8: Returns a new vector containing the UNION of all the Account's 
    // from the two parameter vectors.  Each Account should only appear once in the result 
    // vector.  If the same Account appears in both parameter vectors, it should appear only
    // once in the result vector with a balance equal to the sum of both balances in the 
    // parameter vectors.
    static vector<Account>  combine(vector<Account> v1, vector<Account> v2);{
    vector<Account> result;
    int same =0;
    for(int i=0;i<v1.size();i++)
    {
        result.push_back(v1[i]);  // first insert all into result 
    }
    for(int i=0;i<v2.size();i++)  // then check if the v2[i] is present in result or not if the add the balance else add that to result. 
    {
        for(int j=0;j<result.size();j++)
        {
            if(result[j].accNo==v2[i].accNo && result[i].accType== v2[i].accType)
            {
                same=1;
                result[j].balance+=v2[i].balance;
            }
        }
        if(same==0)
        {
            result.push_back(v2[i]);
        }
    }
    return result;
/**********************Para ser iguales mismo tipo y numero*/
vector<Account> result(v1);
bool found = false;
for(inti=0;i<v2.size();i++){
    for(int j=0;j<result.size();j++){
        if((v2[i].getAccNo()==result[j].getAccNo()) &&
        (v2[i].getType()==result[j].getType())){
            result[j].setBalance(result[j].getBalance()+v2[i].getBalance());
            found = true;
            break;
        } else

    }
    if(!false){
        result.push_back(v2[i]);
    }
}

};

// EXERCISE #1: Return the position of the first occurence of an account of the given
// type within the vector of Account's. Returns -1 if no such Account exists.
int Account::findByType(vector<Account> accounts, AccountType type)
{
		// YOUR CODE HERE
    return -1;
}

// EXERCISE #2: Returns de count of Account's of the parameter type that exist in the
// parameter vector.
int Account::countByType(vector<Account> accounts, AccountType type)
{
    int result=0;
		// YOUR CODE HERE
    return result;
}

// EXERCISE #3: Return the position of the Account with the largest balance in the
// parametter vector. Returns -1 if the vector is empty.
int Account::largestBalance(vector<Account> accounts)
{
		// YOUR CODE HERE
    return -1;  
}

// EXERCISE #4: Returns the average balance of all the Account's of the parameter type
// in the parameter vector.  Returns -1 if the vector does not contain any accounts
// of that type.
double Account::averageBalance(vector<Account> accounts, AccountType type)
{
		// YOUR CODE HERE
    return -1;

}

// EXERCISE #5: Returns true if there are at least two Account's of the same type and
// with tehe same account number within the parametter vector.
int Account::hasDuplicates(vector<Account> accounts)
{
		// YOUR CODE HERE
    return false;
}

// EXERCISE #6: Remove the first occurrence of an Account with a negative balance if
// such an Account exists in the pameter vector.  Leaves vector unchanged otherwise.
void Account::removeFirstNegative(vector<Account> &accounts)
{
		// YOUR CODE HERE
}

// EXERCISE #7: Remove all ocurrences of Accounts with a negative balances if
// such Account's exist in the pameter vector.  Leaves vector unchanged otherwise.
void Account::removeAllNegative(vector<Account> &accounts)
{
		// YOUR CODE HERE
}

// EXERCISE #8: Returns a new vector containing the UNION of all the Account's
// from the two parameter vectors.  Each Account should only appear once in the result
// vector.  Two Account's are considered the same if they have the same account number
// and account type.  If the same Account appears in both parameter vectors, it should 
// appear only once in the result vector with a balance equal to the sum of both balances 
// in the parameter vectors.
vector<Account> Account::combine(vector<Account> v1, vector<Account> v2)
{
    vector<Account> result;
		// YOUR CODE HERE
    return result;
}


//----------------------TEST CASES-----------------------

int main() {

    cout << "Hello Tests" << endl;

    Account ca1(121, 897544, AccountType::CHECKING);
    Account ca2(123, 632593, AccountType::CHECKING);
    Account ca3(124, 5896314, AccountType::CHECKING);

    Account sa1(121, 545, AccountType::SAVINGS);
    Account sa2(125, 1456, AccountType::SAVINGS);
    Account sa3(126, 789, AccountType::SAVINGS);
    Account sa4(127, 159, AccountType::SAVINGS);
    Account sa5(128, 545, AccountType::SAVINGS);

    Account na1(200, -54, AccountType::SAVINGS);
    Account na2(201, -545, AccountType::SAVINGS);
    Account na3(202, -5, AccountType::CHECKING);

    // static Account ea1(122, 6785, AccountType::ENTERPRISE);
    // static Account eea2(129, 693, AccountType::ENTERPRISE);
    // static Account ea3(130, 4587, AccountType::ENTERPRISE);
    // static Account ea4(131, 9632, AccountType::ENTERPRISE);
    // static Account ea5(132, 7896, AccountType::ENTERPRISE);

    vector<Account> emptyVector;
    vector<Account> savingsVector {sa1, sa2, sa3, sa4, sa5};
    vector<Account> checkingVector {ca1, ca2, ca3};
    vector<Account> mixedVector1 {sa1, sa2, sa3, sa4, sa5, ca1, ca2, ca3};
    vector<Account> mixedVector2 {ca1, ca2, ca3, sa1, sa2, sa3, sa4, sa5 };
    vector<Account> duplicateVector1 {ca1, ca2, ca3, sa1, sa2, sa3, sa4, sa5, ca1 };
    vector<Account> duplicateVector2 {ca1, ca2, ca3, sa1, sa2, sa3, sa4, ca3, sa5 };
    vector<Account> duplicateVector3 {ca1, ca1, ca2, ca3, sa1, sa2, sa3, sa4, sa5 };
    vector<Account> negativeVector1 {na1, na2, na3, sa1, sa2, sa3, sa4, sa5 };
    vector<Account> negativeVector2 {sa1, na1, na2, na3, sa2, sa3, sa4, sa5 };
    vector<Account> negativeVector3 {sa1, sa2, sa3, sa4, sa5, na3};
    vector<Account> combineVector1 { sa1, sa2, sa3 };
    vector<Account> combineVector2 { ca1, ca2, sa3 };

    cout << "Test findByType" << endl;
    cout << Account::findByType(emptyVector, AccountType::ENTERPRISE) << endl; // -1
    cout << Account::findByType(savingsVector, AccountType::SAVINGS) << endl; // 0
    cout << Account::findByType(savingsVector, AccountType::CHECKING) << endl; // -1
    cout << Account::findByType(mixedVector1, AccountType::CHECKING) << endl; // 5
    cout << Account::findByType(mixedVector1, AccountType::SAVINGS) << endl; // 0

    cout << "Test countByType" << endl;
    cout << Account::countByType(emptyVector, AccountType::ENTERPRISE) << endl; // 0
    cout << Account::countByType(savingsVector, AccountType::SAVINGS) << endl; // 5
    cout << Account::countByType(savingsVector, AccountType::CHECKING) << endl; // 0
    cout << Account::countByType(mixedVector1, AccountType::CHECKING) << endl; // 3
    cout << Account::countByType(mixedVector1, AccountType::SAVINGS) << endl; // 5

    cout << "Test largestBalance" << endl;
    cout << Account::largestBalance(emptyVector) << endl; // -1
    cout << Account::largestBalance(savingsVector) << endl; // 1
    cout << Account::largestBalance(checkingVector) << endl; // 2
    cout << Account::largestBalance(mixedVector1) << endl; // 7
    cout << Account::largestBalance(mixedVector2) << endl; // 2

    cout << "Test averageBalance" << endl;
    cout << Account::averageBalance(emptyVector, AccountType::SAVINGS) << endl; // -1
    cout << Account::averageBalance(savingsVector, AccountType::SAVINGS) << endl; // 1
    cout << Account::averageBalance(checkingVector, AccountType::SAVINGS) << endl; // 2
    cout << Account::averageBalance(mixedVector1, AccountType::SAVINGS) << endl; // 7
    cout << Account::averageBalance(mixedVector2, AccountType::SAVINGS) << endl; // 2

    cout << "Test hasDuplicates" << endl;
    cout << (Account::hasDuplicates(emptyVector) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(savingsVector) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(checkingVector) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(mixedVector1) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(mixedVector2) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(duplicateVector1) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(duplicateVector2) ? "TRUE" : "FALSE") << endl;
    cout << (Account::hasDuplicates(duplicateVector3) ? "TRUE" : "FALSE") << endl;

    cout << "Test removeFirstNegative 1" << endl;
    Account::removeFirstNegative(emptyVector);
    cout << (emptyVector.size() == 0 ? "PASSED" : "FAILED") << endl;
    Account::removeFirstNegative(savingsVector);
    cout << (savingsVector.size() == 5 ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[0].getAccNo() == sa1.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[1].getAccNo() == sa2.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[2].getAccNo() == sa3.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[3].getAccNo() == sa4.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[4].getAccNo() == sa5.getAccNo() ? "PASSED" : "FAILED") << endl;

    cout << "Test removeFirstNegative 2" << endl;
    Account::removeFirstNegative(negativeVector1);
    cout << (negativeVector1.size() == 7 ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[0].getAccNo() == na2.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[1].getAccNo() == na3.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[2].getAccNo() == sa1.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[3].getAccNo() == sa2.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[4].getAccNo() == sa3.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[5].getAccNo() == sa4.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[6].getAccNo() == sa5.getAccNo() ? "PASSED" : "FAILED") << endl;

    cout << "Test removeAllNegative 1" << endl;
    Account::removeAllNegative(emptyVector);
    cout << (emptyVector.size() == 0 ? "PASSED" : "FAILED") << endl;
    Account::removeAllNegative(savingsVector);
    cout << (savingsVector.size() == 5 ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[0].getAccNo() == sa1.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[1].getAccNo() == sa2.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[2].getAccNo() == sa3.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[3].getAccNo() == sa4.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (savingsVector[4].getAccNo() == sa5.getAccNo() ? "PASSED" : "FAILED") << endl;

    cout << "Test removeAllNegative 2" << endl;
    Account::removeAllNegative(negativeVector1);
    cout << (negativeVector1.size() == 5 ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[0].getAccNo() == sa1.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[1].getAccNo() == sa2.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[2].getAccNo() == sa3.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[3].getAccNo() == sa4.getAccNo() ? "PASSED" : "FAILED") << endl;
    cout << (negativeVector1[4].getAccNo() == sa5.getAccNo() ? "PASSED" : "FAILED") << endl;

    cout << "Test combine" << endl;
    vector<Account> result = Account::combine(combineVector1, combineVector2);
    cout << ((result.size() == 5) ? "PASSED" : "FAILED") << endl;
    cout << (sa1.exists(result) ? "PASSED" : "FAILED") << endl;
    cout << (sa2.exists(result) ? "PASSED" : "FAILED") << endl;
    cout << (sa3.exists(result) ? "PASSED" : "FAILED") << endl;
    cout << (ca1.exists(result) ? "PASSED" : "FAILED") << endl;
    cout << (ca2.exists(result) ? "PASSED" : "FAILED") << endl;

}

