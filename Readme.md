Module 2 Lab Assignment
Jewell Callahan
CS2
Summer 2024
Baarsch

**Purpose Statement:**   

The purpose of this assignment is to give you practice designing different classes that work together to solve a problem.  While it would probably be possible to make a simpler version of Yahtzee that only used one file, Yahtzee has sufficient complexity that such an implementation would likely be confusing and difficult to maintain. 
 It also would not be easy to update or expand.  Maintenance and scaling, while not really things students generally need to worry about in assignments, are the two of the most significant forces that drive modern computing, and two of the crucial motivations for using classes in the first place.  So, while this assignment is requiring you to practice implementing separation of concerns and encapsulation in C++, understand that these are concepts apply to all programming languages and transcend even programming, so practicing them is important and useful. 

**Overview:**
Implement a Yahtzee game. 
For this game you should have at minimum,
 *a Die class 
 *a ConsoleUI class
 *the GameLogic Class.   

Each of these classes should exist in different files and *separate* from the Yahtzee file which will contain your main function. 

So, your project should contain **at least**:   

 *Readme.md 
 *Yahtzee.cpp  
 *GameLogic.h 
 *GameLogic.cpp 
 *ConsoleUI.h 
 *ConsoleUI.cpp 
 *Die.h 
 *Die.cpp 

*Separation of Concerns*:  Each of these classes should keep to their specific function. 

Yahtzee.cpp merely contains the main function.  Perhaps, it might control whether the player wishes to play again—but only though the ConsoleUI class. 

GameLogic:  Controls the logic of the game—manages the rolling of dice and calculating and keeping the scores. 

ConsoleUI:  Controls all interactions with the user.  This is separate because management thinks if they can get the budget for it, they may wish to move this game into a GUI, or even, potentially, VR.  They don’t want to have to change the logic of the game, should that happen. 

Die:  Controls all aspects of the dice: number of sides, faceValue, rolling, even, potentially display (might be handled by ConsoleUI—developer’s choice). 

**Rules**

In case you are not familiar with the rules of Yahtzee, here are the rules from Hasbro.  And here is the Wikipedia entry. 

**Minimum Requirements:**

 * Single Player 
 * Three rounds of rolling five dice, each time, displaying the results of the roll and allowing the option to select which dice will be rolled the next time. 
 * At the end of three rolls, choosing a category to score, with the minimum categories being the aces, twos, threes, fours, fives, and sixes. 
 * After all categories have been filled, displaying a final score. 

*Potential Options:*

 * Include more scoring options: full house, small straight, large straight, etc. 
 * Include bonus for getting above 63 in the first six categories. 
 * Creative display of dice. 
 * Multi-player 
 * Long term recording and display of scores—say in a file. 
 * Dev’s choice for other options 

**Criteria for Evaluation:** 

 * Game works 
 * Do you have the option to roll 5 dice? 
 * Do you get stopped after three turns of rolling? 
 * Can you keep rolls from one turn to the next? 
 * Do you have the option to score? 
 * Is the final score displayed at the end of the game? 

*Design and Building:*
 * Are there multiple classes and files, as specified above? 
 * Do the classes maintain their separation of concerns? 
 * Are there useful comments to clarify the code? 
 * Is there a readme? 
 * Commit History: Do the commits demonstrate consistent and gradual work on the project? 

 