#include <string>
#include <map>
#include <vector>
#include <iostream>

#include "util.h"

using namespace std;

int main()
{
    string configFile = "./parse.conf";
    string recordFile;
    string currencyFile;
    map<string, float>  currencyMap;
    // vector<record>      vecRecord;

    // Read Config file to set global configuration variables. 
    if (!parseConfig(configFile)){
        cerr << "Error parsing Config File " << endl;
        return false;
    }

//     // Read Currency file and fill map
//     if (!fillCurrencyMap()){
//         cerr << "Error setting CurrencyConversion Map " << endl;
//         return false;
//     }

//     if (!parseRecordFile()){
//         cerr << "Error parsing Records File " << endl;
//         return false;
//     }
    
//     displayCurrencyMap();
//     displayRecords();
	return 0;
}
