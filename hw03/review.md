# Review of Zevi's hw02 Assignment
09/03/2014
Jinnan Ge

## ------------------ Style Guide Evaluation ------------------

+ Overall: great work on only using spaces (intead of tabs), naming and structure of code
+ Something to improve: #define style -- style guide suggests being <PROJECT>_<PATH>_<FILE>_H_, better if following the guide
+ Need summary, date, short introductions of the program
+ Use of struct and classes: can totally make Node into a new class in .h file, style guide says "use a struct only for passive objects that carry data; everything else is a class."
+ File I/O has a problem: not producing output
+ Style Guide says to comment on the top of each file, so need to add "// main.cpp", etc. on top of the files



## ------------------ Code Evaluation ------------------

+ File input and output in the constructor, good understanding of object oriented programming
+ The program doesn't run and produce resulting file automatically, need to fix the file IO problem
+ Bug: displayStates function takes in string state, string abv as input, but the prototype in StatesLinkList.h has nothing as input
+ No searching function?
+ I would have a seperate function of "adding node to the end of the list", like an addNote(string stateName) function in StatesLinkList.h file
+ Hence, no output file from my side