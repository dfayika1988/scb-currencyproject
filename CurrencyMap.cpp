void displayCurrencyMap(){
     
    cout << "Currency MAP :" << endl;
    for (auto p : currencyMap)
        cout << p.first <<"  :  " << p.second << endl;
    cout << endl;
}

ostream& operator<<(ostream& os, const record &rec){
    os << rec.customerId <<"|" << rec.firstName << "|" << rec.lastName << "|" 
       << rec.orderId << "|" << rec.productId << "|" << rec.quantity << "|" 
       << fixed << setprecision(2) << rec.totalPriceRegional << "|" << rec.currency << "|" 
       << fixed << setprecision(2) << rec.totalPriceUsd << endl;
    return os;
}


void displayRecords(){
    cout << " Displaying records with '|' delimiter" << endl;
    for (auto rec : vecRecord){
        cout << rec;
    }
    cout << endl;
}
