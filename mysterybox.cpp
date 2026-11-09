bool mystery(string fstr) {	
    string rstr;	 // a string is like an array of chars, e.g., char[]
    for(int i=fstr.length()-1; i>=0 ;i--){
         rstr +=  fstr[i];  // fstr[i] gets the char at index i 
    }
    return rstr == fstr;
  }

//This code first takes a string
//Uses a for loop fromt the last index to the initial index to reverse it
//by returning rstr == fstr, it either evaulates to true if it is a palindrome
//Else Fase 