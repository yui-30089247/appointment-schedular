#ifndef MEMO_H
#define MEMO_H

#include <iostream>
#include <string>

using namespace std;

/**
 * This class sets a brief memo or note for an appointment
 */

class Memo {
    private:
        string description;
    public:
        Memo();
        Memo(string desc);
        string getMemo() const;
        void setMemo(string memo);
    
};

#endif