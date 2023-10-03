#quiz game in python program
#create a dictionary that stores questions and answers
#have a variable that tracks the score of the player
#loop through the dictionary using the key value pairs
#display each question to the user and allow them to answers
#tell them if they are right or wrong
#show user the final result when quiz is completed

print("Welcome to the quiz!")

playing = input("Do you want to play? ")
if playing != "yes":
    quit()
print ("Okay! Let's play :)")
print ("")

quiz = {
    "question1": {
        "question": "What is Iron Man's real name?",
        "answer": "Tony Stark"
    },
    "question2": {
        "question": "Who played Batman in the latest Matt Reeves' 'The Batman'?",
        "answer": "Robert Pattinson"
    },
    "question3": {
        "question": "What is the country of origin of Black Panther?",
        "answer": "Wakanda"
    },
    "question4": {
        "question": "What is the name of Batman's sidekick?",
        "answer": "Robin"
    },
    "question5": {
        "question": "What is Superman's weakness?",
        "answer": "Kryptonite"
    },
    "question6": {
        "question": "What role did Chris Evans play in the MCU?",
        "answer": "Captain America"
    },
    "question7": {
        "question": "Which avenger shoots arrows with his bow?",
        "answer": "Hawkeye"
    },
    "question8": {
        "question": "What is the name of Thor's homeworld ?",
        "answer": "Asgard"
    }, 
    "question9": {
        "question": "Which superhero is known for breaking the 4th wall from time to time?",
        "answer": "Deadpool"
    },
    "question10": {
        "question": "What is Spider-Man's real name",
        "answer": "Peter Parker"
    }
}

score = 0

for key, value in quiz.items():
    print(value['question'])
    answer = input ('Answer? ')
    
    if answer.lower() == value['answer'].lower():
        print ('Correct!')
        score = score + 1
        print ('Your score is ' + str(score))
        print ("")
        print ("")
      
    else:
        print('Wrong!')
        print ('The answer is : ' + value['answer'])
        print ('Your score is ' + str(score))
        print("")
        print("")
        
print ("You got " + str(score) + " out of 10 questions correctly!")
print ("Your percentage is " + str(int(score/10*100)) + "%")
