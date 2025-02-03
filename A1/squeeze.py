


# Python implementation of A1 program 4: Sqeeuze.c understanding and for the writing of the README later
# Just for my own

def squeeze():
    string_input = input("Enter a seuqence of letters: ")

    counter = 0
    prev_char = string_input[0]
    result= ''

    for char in string_input:
        if char == prev_char:
            counter +=1
            if counter == 9:
                result += prev_char + str(counter)
                counter = 0
        else:
            if counter > 1:
                result += prev_char + str(counter)
            else:
                result += prev_char
            
            prev_char = char
            counter = 1
    
    # for the last character that ended the loop
    if counter > 1:
        result += prev_char + str(counter)
    else:
        result += prev_char

    print(result)

squeeze()
