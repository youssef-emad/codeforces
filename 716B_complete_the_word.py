word = raw_input()
size = len(word)
if size < 26:
    print -1
else:
    found = False
    for i in range(size - 25):
        letters = {'A': 0, 'B': 0, 'C': 0, 'D': 0, 'E': 0, 'F': 0, 'G': 0, 'H': 0, 'I': 0, 'J':0, 
           'K': 0, 'L': 0, 'M': 0, 'N': 0, 'O': 0, 'P': 0, 'Q': 0, 'R': 0, 'S': 0, 'T': 0,
          'U': 0, 'V': 0, 'W': 0, 'X':0, 'Y': 0, 'Z': 0, '?': 0}
        twice = False
        number_of_questions = 0
        number_of_zeros = 0
        questions = []
        zeros = []
        index = i
        for letter in word[i: i + 26]:
            letters[letter] += 1
            if letters[letter] > 1 and letter != '?':
                twice = True
                break
            elif letter == '?':
                questions.append(index)
                number_of_questions += 1
            index += 1
        if not twice:
            for let in letters.keys():
                if letters[let] == 0 and let != '?':
                    number_of_zeros +=1
                    zeros.append(let)
            word = list(word)
            if number_of_questions == number_of_zeros:
                found = True
                for i in range(number_of_zeros):
                    word[questions[i]] = zeros[i]
                break
    if not found:
        print -1
    else:
        output = ""
        for let in word:
            if let != "?":
                output += let
            else:
                output += "A"
        print output