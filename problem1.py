
kingno = 1
queenno = 1
rocks = 2
bishops = 2
knights = 2
pawns = 8

input = raw_input("Enter your six numbers: ")


output = map(int, input.split())



print ( str(kingno - output[0]) + " "  +  str(queenno - output[1]) + " "
        + str(rocks - output[2]) + " " +  str(bishops - output[3]) +" "
        + str( knights - output[4])+" "+    str(pawns - output[5])) 


