// Function to parse CurrencyConversion file and store values in Map.
bool fillCurrencyMap() {
    ifstream currFile;
    string error;
    if (!checkFile(currFile, currencyFile, "Currency", '|', error)){
        cerr << "ERROR: " << error << endl;
        return false;
    }

    bool flag = true;
    vector<string> split;
    while (currFile.good()){
        parseLine(currFile, split, '|');

        if (split.size() == 2){
            if (parseCurrencyParameters(split)){
                currencyMap[split[0]] = static_cast<float>(atof(split[1].c_str())); // make sure currency is valid.
            } else {
                cerr << "ERROR: Processing Currency Conversion file for Currency: "<< split[0] << endl;
                flag = false;
                break;
            }
        } else if (!split.empty()){
            cerr << "ERROR: Processing Currency Conversion , got incorrect parameters for Currency: " << split[0] << endl;
            flag = false;
            break;
        }
    }

    return flag;
}
