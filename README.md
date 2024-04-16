# Exercices
Those exercises are designed for beginners who are learning **Data Structures and Algorithms**. The solutions of the exercises are written in C programming language.

## Exercise 1:
Write a C program that prompts users to input their blood type, calculates the frequency and percentage for each blood type, and then display the results along with the total population. The program should exit when the user inputs 'q'.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/bloodType.c) to see the solution of the exercise.

## Exercise 2:
Two players roll a die. The player with the highest result scores a point. The game stops when one of the players reaches a score of 11. Simulate this game with a C program.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/diceRolling.c) to see the solution of the exercise
## Exercise 3:
Write a C program to display the first N prime numbers.
Example N = 5, the first 5 prime numbers are {2, 3, 5, 7, 11}

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/primeNumbers.c) to see the solution of the exercise.
## Exercise 4: 
Write a C program that prompts the user to input 2 integer numbers, then it calculates their greatest common divisor, and display the results.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/gcd.c) to see the solution of the exercise.

## Exercise 5: 
Write a C program to sort an array of integers of length N in ascending and descending order.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/sortingAscDesc.c) to see the solution of the exercise.

## Exercise 6: 
Write a C program that prompts the user to input an integer value, and subsequently checks whether the entered value exists in the array of integers named 'Array'.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/searchForValue.c) to see the solution of the exercise.
## Exercise 7:
Write a C program that reverses an array of integers.
Example: input: [1,2,3,4,5].
output: [5,4,3,2,1].

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/reverseArray.c) to see the solution of the exercise.

## Exercise 8:
Write a C program that reads the dimension N of an array T of type int (maximum dimension 50) and allows you to:
1. Fill the array with values entered from the keyboard and display the array.
2. Calculate and display the sum of the elements of the array.
3. Determine the largest and smallest value in the array and then display the value and the
position of the maximum and minimum (the program retains the position of the first maximum or minimum encountered).
4. Arrange the elements of the array T in reverse order without using an auxiliary array and display the resulting array.
5. Copy all strictly positive elements into a second array TPOS and all strictly negative values into a third array TNEG. Display the TPOS and TNEG arrays.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/arrays2.c) to see the solution of the exercise.
## Exercise 9:
1. Write a program that reads the dimensions N and M of two-dimensional arrays A and B of type int (N and M are entered from the keyboard, maximum 50).
2. Fill the array with values entered from the keyboard and display the array along with the sum of all its elements.
3. Perform the addition of the two matrices A and B, remembering that:

$$\begin{bmatrix}
a & b\\
c & d\\
\end{bmatrix} + \begin{bmatrix}
e & f\\
g & h\\
\end{bmatrix} = \begin{bmatrix}
a+e & b+f\\
c+g & d+h\\
\end{bmatrix}
$$

4. Calculate the product of two square matrices of the same dimension.
5. Display the number of occurrences of the variable X in both matrices.

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/matrices.c) to see the solution of the exercise.

## Exercise 10:
Write a program that reads a line of text (not exceeding 200 characters), stores it in a variable
TXT, and then displays:
1. the length L of the string.
2. the number of 'a's contained in the text.
3. the entire sentence in reverse after having reversed the order of characters in TXT.

**Example:**

Original: "voici une petite phrase !".

Reversed: "! esarhp etitep enu iciov".

click on this [link](https://github.com/ramzikhantouchi/Algorithms-and-data-structures-exercises-for-undergraduate-students/blob/main/texts.c) to see the solution of the exercise.

## Exercise 11:
**Describe the matchstick game:** initially, there is a pile of n matchsticks. (players specify the number of matchsticks to start the game)
- The game can be played against a computer or another player.
- Both players roll a die (the one with the higher number starts the game).
- Each player, in turn, must take 1, 2, or 3 matchsticks from the pile of n matchsticks.
- The player who removes the last matchstick loses.
- At the end of the game, the user can be asked to replay or quit.

## Project: 
**Discription:**

In the context of this university project, students are invited to develop a system for managing patient information for a hospital, using the C programming language. The focus is on the precise handling of medical and hospital details, with an approach that values the structuring and organization of data.

**Objective:**

The main objective of the project is to design a system that not only stores but also effectively manages patient information. This system will need to include details of prescribed treatments, any drug allergies, hospitalization data, as well as personal information of the patients.

**Project Specifications:**

To achieve this, students will need to create and use custom data structures in C. These structures should cover various aspects:
- **Treatment:** Store the name of the medication, dosage, and duration of treatment.
- **Drug Allergies:** Indicate the presence of allergies (yes or no) and, in case of allergies, record the corresponding details.
- **Hospitalization:** Record whether the patient was hospitalized or not. If so, details such as the service and hospital room, the name, first name, and specialty of the treating physician, the type of treatment received, the diagnosis of the disease, as well as the admission and discharge dates should be included.
- **Personal Information:** Gather basic information such as the patient's name, first name, date of birth, and patient file number.

**Key functionalities:**

Key functionalities to be developed in this system include the ability to fully enter patient data, search for patients by their name, first name, or file number, and display detailed information about these patients.

**Important considerations:**

Important considerations for this project are the need to rigorously validate entries to ensure data accuracy. Moreover, it is essential that the code is well structured, clearly commented, and designed to be easy to understand and maintain. This project will offer students a valuable opportunity to develop their structured programming skills, while addressing a practical and relevant subject in the field of healthcare.

**Note:** “Clarity is the key to efficiency in programming.”

## Exercise 12:
Write a program in C to find the square of any number using the function.

**Test Data :**

Input any number for square : 20

**Expected Output :**

The square of 20 is : 400.00

## Exercise 13:

Write a program in C to swap two numbers using a function.

**Test Data :**
Input 1st number : 2\\
Input 2nd number : 4\\
**Expected Output :**

Before swapping: n1 = 2, n2 = 4\\                                                  
After swapping: n1 = 4, n2 = 2 

