[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13742113)

# Laboratory Activity 3 - Conditional Statements


## Homework 1: On Time Hotel (lab3_hw1.c)

The Hotel Inn named as On Time Hotel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. But if the guest arrives earlier, they would need to wait for noon before they can checked-in. Build a C program that calculates your price to pay based on your guest's time of arrival.

Your program will read an integer (0 to 23) indicating the military hour of your arrival. For example, 12 indicates 12 noon arrival, 13 means 1pm arrival, 0 means midnight arrival, etc. 

The base price is 1000 pesos, and 200 pesos are added for every hour after noon. Thankfully the total is capped at 2000 pesos, so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input hour of arrival.

Additionally, If the client arrives from 6 until 11, then program must ask first whether they are checking-in now, If yes, then they must be charged at the capped price. On the other hand, if not, then they must be told to wait for 12 noon for check-in.

*Note: If the user entered a float, then it would be read as an integer*

| Test Input | Expected Console Output |
| ----------------- | ---------------------------------------- |
| 12 | What is the hour of your arrival? 12<br>Please pay 1000 pesos|
| 12.2 | What is the hour of your arrival? 12.2<br>Please pay 1000 pesos|
| 15 | What is the hour of your arrival? 15<br>Please pay 1600 pesos|
| 17 | What is the hour of your arrival? 17<br>Please pay 2000 pesos|
| 23 | What is the hour of your arrival? 23<br>Please pay 2000 pesos|
| 0 | What is the hour of your arrival? 0<br>Please pay 2000 pesos|
| 5 | What is the hour of your arrival? 5<br>Please pay 2000 pesos|
| 6 <br> Y | What is the hour of your arrival? 6<br>Are you checking in now[Y/N]? Y<br>Please pay 2000 pesos|
| 6 <br> y | What is the hour of your arrival? 6<br>Are you checking in now[Y/N]? y<br>Please pay 2000 pesos|
| 6 <br> N | What is the hour of your arrival? 6<br>Are you checking in now[Y/N]? N<br>Please wait for noon to check-in|
| 6 <br> n | What is the hour of your arrival? 6<br>Are you checking in now[Y/N]? n<br>Please wait for noon to check-in|
| 11 <br> Y | What is the hour of your arrival? 11<br>Are you checking in now[Y/N]? Y<br>Please pay 2000 pesos|
| 11 <br> y | What is the hour of your arrival? 11<br>Are you checking in now[Y/N]? y<br>Please pay 2000 pesos|
| 11 <br> N | What is the hour of your arrival? 11<br>Are you checking in now[Y/N]? N<br>Please wait for noon to check-in|
| 11 <br> n | What is the hour of your arrival? 11<br>Are you checking in now[Y/N]? n<br>Please wait for noon to check-in|
| 11 <br> C | What is the hour of your arrival? 11<br>Are you checking in now[Y/N]? C<br>Invalid Input!|
| 24 | What is the hour of your arrival? 24<br>Invalid Input!|
| 36 | What is the hour of your arrival? 36<br>Invalid Input!|
| -1 | What is the hour of your arrival? -1<br>Invalid Input!|

<br><br><br><br><br>

## Exercise 2: La Filipina Eco Park (lab3_hw2.c)

As you visit the La Filipina Ecopark together with your friend, you can't help but admire the nature around you including the many species of our native trees. Despite your interest, you are a very unskilled botanist and have a lot of trouble identifying different trees. Your botanist friend gives you partial guidance and you decide to write a program that will give you the name of the tree based on its characteristics.

Your botanist told you that there are only 5 tree species in this eco-park, he gave you a list of 5 tree species:

|Tree Species   | Wood Density | Tree size   |
|:-------------:|:------------:|:-----------:|
|Dao            |0.500 to 0.600|	L        |
|Katmon	        |0.601 to 0.700|    M        |
|Yakal          |0.701 and above|	L        |
|Kamagong       |0.701 and above|	M        |
|Gisok-gisok	|0.701 and above|	S        |

Assume that you can instantly measure the wood density and infer its tree size correctly.

Your program should read the actual measurement of wood density (i.e. double) and your inferred tree size (i.e. char)  and should be able to determine and display the name of the corresponding tree.  If the wood density and tree size do not match any of the tree type descriptions, your program should display "Uncertain".


| Test Input | Expected Console Output |
| ----------------- | ---------------------------------------- |
| 0.601 <br> M | Wood Density: 0.601<br>Tree Size: M<br>The Tree is Katmon!|
| 0.700 <br> M | Wood Density: 0.700<br>Tree Size: M<br>The Tree is Katmon!|
| 0.500 <br> L | Wood Density: 0.500<br>Tree Size: L<br>The Tree is Dao!|
| 0.600 <br> L | Wood Density: 0.600<br>Tree Size: L<br>The Tree is Dao!|
| 0.701 <br> L | Wood Density: 0.701<br>Tree Size: L<br>The Tree is Yakal!|
| 0.900 <br> L | Wood Density: 0.900<br>Tree Size: L<br>The Tree is Yakal!|
| 0.701 <br> M | Wood Density: 0.701<br>Tree Size: M<br>The Tree is Kamagong!|
| 0.701 <br> S | Wood Density: 0.701<br>Tree Size: S<br>The Tree is Gisok-Gisok!|
| 0.600 <br> M | Wood Density: 0.600<br>Tree Size: M<br>Uncertain|
| 0.600 <br> S | Wood Density: 0.600<br>Tree Size: S<br>Uncertain|
| 0.650 <br> L | Wood Density: 0.650<br>Tree Size: L<br>Uncertain|
| 0.650 <br> S | Wood Density: 0.650<br>Tree Size: S<br>Uncertain|

<br><br><br><br><br>

## Exercise 3: Creating your own Grading System (lab3_hw3.c)
You've realized that the transmutation table of each courses different between courses. But you've found out some patterns:
- whenever that they have the same minimum passing score, they would have the same transmutation table. 
- For a given passing score, the distribution of range of scores between equivalent grade are almost similar

Apparently, our grading system can be represented using some formulas:
Let:

k = (100 - passing_score) / 7

| Lower Limit (inclusive) of Final Grade | Upper Limit of Final Grade | Equivalent Grade |
|:--------------------------------------:|:--------------------------:|:----------------:|
| ceil(100 - k)                          | no limit                   | 4.0              |
| ceil(100 - 2*k)                        | ceil(100 - k)              | 3.5              |
| ceil(100 - 3*k)                        | ceil(100 - 2*k)            | 3.0              |
| ceil(100 - 4*k)                        | ceil(100 - 3*k)            | 2.5              |
| ceil(100 - 5*k)                        | ceil(100 - 4*k)            | 2.0              |
| ceil(100 - 6*k)                        | ceil(100 - 5*k)            | 1.5              |
| passing_score                          | ceil(100 - 6*k)            | 1.0              |
| 0                                      |  passing_score             | 0.0              |

where: ceil is the ceiling function (aka round_up function)

In this exercise, you are tasked to write a program that automates two things:     
  1. Given the passing score, display the appropriate transmutation table  
  2. Afterwards, ask for their final grade, compute and display its equivalent grade  

**Note: Make sure that the passing score is an integer. That is, When the entered passing score is a float, it would be round-down and read as integer**  
**Note2: Make sure that the passing score works from 50 to 70**
<br>

|Test Input   | Expected Console Output | Test Input | Expected Console Output | 
|:------------|:------------------------|:-----------|:------------------------|
| 49.99       | Passing Score: 49.99 <br> Passing Score is only allowed from 50-70 | 49 | Passing Score: 49 <br> Passing Score is only allowed from 50-70 | 
|50 <br> 70   | Passing Score: 50<br>93-100 = 4.0<br>86-93 = 3.5<br>79-86 = 3.0<br>72-79 = 2.5<br>65-72 = 2.0<br>58-65 = 1.5<br>50-58 = 1.0<br>0-50 = 0.0 <br><br>Final Grade: 70 <br> Equivalent Grade: 2.0 | 50.9 <br> 70 | Passing Score: 50<br>93-100 = 4.0<br>86-93 = 3.5<br>79-86 = 3.0<br>72-79 = 2.5<br>65-72 = 2.0<br>58-65 = 1.5<br>50-58 = 1.0<br>0-50 = 0.0 <br><br>Final Grade: 70 <br> Equivalent Grade: 2.0 |
|70 <br> 100 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 100 <br> Equivalent Grade: 4.0 | 70 <br> 100.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 100.01 <br> Equivalent Grade: 4.0 | 
|70.9 <br> 97 | Passing Score: 70.9<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 97 <br> Equivalent Grade: 4.0 | 71 | Passing Score: 71 <br> Passing Score is only allowed from 50-70 |
| 70 <br> 94 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 94 <br> Equivalent Grade: 3.5 | 70 <br> 95.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 95.99 <br> Equivalent Grade: 3.5 | 
| 70 <br> 96 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 96 <br> Equivalent Grade: 4.0 | 70 <br> 96.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 96.01 <br> Equivalent Grade: 4.0 |
| 70 <br> 90 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 90 <br> Equivalent Grade: 3.0 | 70 <br> 91.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 91.99 <br> Equivalent Grade: 3.0 | 
| 70 <br> 92 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 92 <br> Equivalent Grade: 3.5 | 70 <br> 92.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 92.01 <br> Equivalent Grade: 3.5 |
| 70 <br> 85 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 85 <br> Equivalent Grade: 2.5 | 70 <br> 87.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 87.99 <br> Equivalent Grade: 2.5 | 
| 70 <br> 88 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 88.00 <br> Equivalent Grade: 3.0 | 70 <br> 88.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 88.01 <br> Equivalent Grade: 3.0 |
| 70 <br> 82 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 82 <br> Equivalent Grade: 2.0 | 70 <br> 82.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 82.99 <br> Equivalent Grade: 2.0 | 
| 70 <br> 83 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 83.00 <br> Equivalent Grade: 2.5 | 70 <br> 83.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 83.01 <br> Equivalent Grade: 2.5 |
| 70 <br> 77 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 82 <br> Equivalent Grade: 1.5 | 70 <br> 78.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 78.99 <br> Equivalent Grade: 1.5 | 
| 70 <br> 79 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 79.00 <br> Equivalent Grade: 2.0 | 70 <br> 79.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 79.01 <br> Equivalent Grade: 2.0 |
| 70 <br> 73 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 73 <br> Equivalent Grade: 1.0 | 70 <br> 74.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 74.99 <br> Equivalent Grade: 1.0 | 
| 70 <br> 75 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 75.00 <br> Equivalent Grade: 1.5 | 70 <br> 75.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 75.01 <br> Equivalent Grade: 1.5 |
| 70 <br> 68 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 68 <br> Equivalent Grade: 0.0 | 70 <br> 69.99 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 69.99 <br> Equivalent Grade: 0.0 | 
| 70 <br> 70 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 70.00 <br> Equivalent Grade: 1.0 | 70 <br> 70.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 70.01 <br> Equivalent Grade: 1.0 |
| 70 <br> -5 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: -5 <br> Invalid Input! | 70 <br> -0.01 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: -0.01 <br> Invalid Input! |
| 70 <br> 0 | Passing Score: 70<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 0.00 <br> Equivalent Grade: 0.0 | 70 <br> 0.01 | Passing Score: 19<br>96-100 = 4.0<br>92-96 = 3.5<br>88-92 = 3.0<br>83-88 = 2.5<br>79-83 = 2.0<br>75-79 = 1.5<br>70-75 = 1.0<br>0-70 = 0.0 <br><br>Final Grade: 0.01 <br> Equivalent Grade: 0.0 |

<br><br><br><br><br>

