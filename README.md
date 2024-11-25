Left-Right-Center-Dice-Game

NIHKIL PATEL 
 
**Purpose**


The purpose of this program is to simulate the dice game "Left, Right, Center" (LRC) using the C programming language. The program allows a specified number of players (ranging from 3 to 10) to participate in a simulated game where each player starts with three chips. Players take turns rolling up to three dice, depending on the number of chips they have. Based on the outcome of each die roll—keeping a chip, passing one to the left or right, or adding one to the center pot—the game state is updated accordingly. The simulation continues until only one player has any chips remaining, at which point that player is declared the winner. This program effectively models the game's mechanics, manages player interactions, and provides a detailed account of the game's progress and outcome.

**Randomness**


Randomness is the absence of patterns; there is no structure or a predetermined set of outcomes—nobody knows what’s going to happen next. While it is possible to achieve randomness, it becomes challenging when dealing with a large set of numbers for initialization, as a small set of numbers can only produce a limited number of combinations. Pseudorandom numbers result in the same set of random numbers for a particular seed we provide. In our assignment, we utilize pseudorandom numbers to randomize each player’s dice roll, ensuring that each player has an equal chance of landing on a specific side. Additionally, it aids us in determining the next steps for our program.

**Abstraction**

To me, abstractions represent the inner workings of something—they're like what's happening beneath the hood of a car. Abstractions are the components that collectively enable a larger operation to function smoothly. They are the details and fine functions that allow us to interact with a system at a higher level without worrying about how it all actually works.

**Importance of Abstractions**

Abstractions make debugging easier. Integrated functions are available across various languages, allowing us to perform a large number of tasks. Most, if not all, languages include a variety of these integrated functions, simplifying the process of writing complex scripts and debugging for everyone. Beyond debugging, abstractions serve additional purposes, such as creating our own functions. Anyone can develop their own functions and implement them, constructing their own abstractions and understanding the inner workings of a larger function. It’s not mandatory to be the one writing these abstractions; however, if the desired functions or operations are not readily available, individuals have the flexibility to create their own. This often involves utilizing and crafting specific abstractions.

**Functions**

I believe the key to using two or more functions at the same time is to employ some form of loop. I recognize that a while loop is essential, considering each player can only play when they possess tokens. As I looked into the assignment and how each player takes a turn and the outcomes based on their dice roll, I realized the necessity of a for loop to keep track of the number of players, each having a set of values corresponding to their rolls. Furthermore, it’s crucial to maintain a record of each player’s actions based on the face they land on. For this purpose, I think I'll be using for loops to monitor the number of tokens each player has and whose turn it currently is. Additionally, a while loop will be used to track whether each person is still in the round and possesses tokens. I envision using if statements to determine the consequences for each player after rolling the dice. In essence, multiple functions require the use of loops. The selection of the appropriate loop type is crucial, considering their effect and the collaborative functionality of each loop you create inside each other, also known as nested loops.

**Testing**


For this assignment, my objective is to conduct tests on various aspects. Firstly, I plan to test different SEED inputs in my game. This involves testing how variations in SEED values influence the random operator in my program. I’ll check whether the SEED inputs align with the expected values, ensuring the correct implementation of the random operator. Additionally, I aim to test the program’s behavior with different SEED inputs, including large values, extremely small values, and cases where no input is provided. Another focus of my testing will be on the input of names, validating them against the array specified for names in the given name file. This not only ensures the correct implementation of the provided file but also evaluates the functionality of all name inputs. I will explore scenarios such as what happens if the inputted name isn’t found in the array and how the program responds when no name is entered. I’ll also test the system’s reaction to inputs containing symbols or letters alongside valid names. To make these tests, I will utilize the provided test cases and conduct additional manual tests within my virtual machine.

**Integration**


Testing becomes a powerful tool to validate the correctness of the script created and compiled with a specific SEED. The pseudorandom operator relies on a SEED, and when testing the output with a particular seed, it should consistently produce the same results. Essentially, a correctly written script should yield a single output for a given SEED. By comparing the output of your script against a known standard, it becomes clear whether the script is correct or not. This testing approach simplifies the process of determining the correctness of your script, providing a reliable method to identify errors. Moreover, abstractions play a crucial role in this testing process. It’s through the addition of abstractions that numbers, which we test for consistency, can be generated.

**How to Use the Program**

You will be prompted to choose the number of players you want to play with. This has to be in a range from 3 to 10, and the user has to input an integer value. Then you are prompted to input a SEED, which is the randomness factor of your game. If an invalid SEED is entered, then the program automatically sets the SEED to the default value of 4823 instead. Then the game runs, each player’s status is displayed, and the winner is determined.

**Program Design**

I started by understanding all the provided files and functions given to me in the names.h and runner.sh files. The initial setup covers most of the starting input values set by the user of my script, including the number of players as an integer value and the SEED amount of the game as an integer value. If no input is given during the SEED initiation, then it defaults to 4823. Next, I needed to use the names and understand how the file is supposed to run.	
Then, I started by initializing the different variables I needed to keep track of. These include the number of players, the current round as an integer, and whose turn it is in the round as an integer corresponding with the array of names provided by the user and the names.h file. Additionally, I tracked the number of tokens (dice rolls) each player has as an integer value.
I used these variables in combination with loops to iterate and keep track of the current round and the number of tokens each player has. I believe I will be using nested for loops to iterate over multiple variables. I also used the pseudorandom function inside the if statements to determine what would happen to the status of each player’s tokens after a roll, as different faces of the dice change the players’ number of tokens.
Along with that, I used the array of names from the names.h file, which helped me call and change the token values associated with certain players. After each round, the loops either add or subtract iterations from each variable. The if statements either add or subtract points from a player by asking them to give their token to another player (hand left or right) or to the center pot.
The while loop is in charge of keeping track of the players’ tokens. Once a player's token value is 0, the while loop stops running and determines a winner of the round. The game ends when the winner is determined by whoever is left at the end with the most tokens, and everyone else has 0.
In my design, I began by initializing the typedef and die surface functions provided in the assignment. The main function started by initializing the number of players in the game using num_players, followed by the initialization of the seed. The user-inputted number sets the seed, and any invalid input defaults the seed to 4823.
Next, I created an array with empty values and assigned them the names provided in the given names.h file. After assigning each name, each player received their chips through a for loop. Subsequently, a while loop was introduced with the sole purpose of keeping the game running until a winner is determined.
Inside the while loop, I initialized index and count variables to check each player’s chip count at the end of the round and keep track of those with more than 0 chips, indicating they are still in the game and have an opportunity to roll. If more than one person has more than one chip, the while loop continues; otherwise, it ends, and a winner is determined.
Following that, an if statement prints the names of the players in the game and outputs the information. Subsequently, a for loop iterates, adding or subtracting values based on the face of the dice. The roller function starts with the srandom function, generating random values corresponding to the die positions defined in the names.h file.
For left and right rolls, considerations were made for the edges of the array to ensure that these edge players can pass and receive chips to the correct person. The index of the player receiving the chip is reset to pass the chips to the start or end of the array with player_chips[0]++ or player_chips[num_players - 1]++ respectively.
After that, the check_winner function is executed within the code, and a winner is printed out. The loop is then broken, and the code returns 0, indicating it ran successfully. To validate my program, I tested various scenarios, including edge cases, and ensured that incorrect inputs, such as a combination of numbers and alphabetical letters, were handled correctly.


