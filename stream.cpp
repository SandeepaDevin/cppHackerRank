  char ch;
    int temp;
    
    while(ss)   // While the stringstream object does not hit a null byte
    {
        ss>>temp>>ch;   // Extract the comma seperated ints with the extraction >> operator
        vec.push_back(temp);   // Push the int onto the vector
    } 
