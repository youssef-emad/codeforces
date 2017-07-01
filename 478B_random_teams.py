def calcPairs(a):
    return a*(a-1)/2
    
def calcMax(players,teams):
    comb = players - (teams -1)
    return calcPairs(comb)

def calcMin(players,teams):
    comb = players/teams
    extraTeams = players%teams
    return (teams - extraTeams)*calcPairs(comb) + extraTeams*(calcPairs(comb+1))

players,teams = map(int, raw_input().split())

print calcMin(players,teams)
print calcMax(players,teams)